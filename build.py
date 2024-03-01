import os
import subprocess
import shutil
import subprocess
import datetime
import zipfile
import hashlib
import json

def get_md5_hash(folder_path):
    hash_md5 = hashlib.md5()
    # Walk through all files in the folder, sorted by path
    for root, dirs, files in os.walk(folder_path):
        for file in sorted(files):
            file_path = os.path.join(root, file)
            # Update the hash with the file path and contents
            hash_md5.update(file_path.encode())
            with open(file_path, "rb") as f:
                for chunk in iter(lambda: f.read(4096), b""):
                    hash_md5.update(chunk)
    return hash_md5.hexdigest()

def run_pbo_project(input_folder, output_folder):
    # Load the existing hashes
    hashes_file_path = os.path.join(output_folder, 'hashes.json')
    if os.path.exists(hashes_file_path):
        with open(hashes_file_path, 'r') as f:
            existing_hashes = json.load(f)
    else:
        existing_hashes = {}

    # Ensure the output folder exists
    os.makedirs(output_folder, exist_ok=True)

    # Create a STARTUPINFO object
    startupinfo = subprocess.STARTUPINFO()
    startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW

    # Iterate over subfolders in the input folder
    for folder_name in os.listdir(input_folder):
        subfolder_path = os.path.join(input_folder, folder_name)
        mod_cpp_path = os.path.join(subfolder_path, 'mod.cpp')
        if os.path.isdir(subfolder_path) and os.path.isfile(mod_cpp_path):
            # Compute the hash of the subfolder
            new_hash = get_md5_hash(subfolder_path)

            # Skip this folder if it has already been processed and the hash hasn't changed
            if folder_name in existing_hashes and existing_hashes[folder_name] == new_hash:
                print(f"Skipping {folder_name} (no changes)")
                continue

            # Construct the pboProject command
            output_label = folder_name
            output_subfolder = os.path.join(output_folder, '@tc_' + folder_name)
            os.makedirs(output_subfolder, exist_ok=True)
            command = [
                'pboproject',
                '-P',  # Do not pause after executing
                '+M=' + output_subfolder,  # Set mod output directory
                '+L=' + output_label,  # Set label for PBO's name
                '+K=C:\\Users\\Tyen\\Documents\\tc_arma.biprivatekey',  # Use the signing key
                subfolder_path
            ]

            # Run the command
            try:
                subprocess.run(command, check=True, startupinfo=startupinfo)
                print(f"Processed: {folder_name}")
            except subprocess.CalledProcessError as e:
                print(f"Error processing {folder_name}: {e}")

            # Copy mod.cpp and .paa files
            shutil.copy(mod_cpp_path, output_subfolder)
            for file_name in os.listdir(subfolder_path):
                if file_name.endswith('.paa'):
                    shutil.copy(os.path.join(subfolder_path, file_name), output_subfolder)
            
            # Update the hash for this folder
            existing_hashes[folder_name] = new_hash

    # Save the hashes
    with open(hashes_file_path, 'w') as f:
        json.dump(existing_hashes, f, indent=4)    


def main():
    # Set the current script directory as the input folder
    script_dir = os.path.dirname(os.path.abspath(__file__))

    # Set the output folder within the same directory named 'build'
    output_folder = os.path.join(script_dir, 'build')

    # # Delete the output folder if it exists, recursively
    # if os.path.exists(output_folder):
    #     print(f"Deleting {output_folder}")
    #     shutil.rmtree(output_folder)
    
    run_pbo_project(script_dir, output_folder)

    # Get the current date and git hash
    date_str = datetime.datetime.now().strftime('%y.%m.%d')
    git_hash = subprocess.check_output(['git', 'rev-parse', '--short', 'HEAD']).decode('utf-8').strip()
    zip_filename = f"{date_str}.{git_hash}.zip"

    # Delete the zip file if it exists
    if os.path.exists(zip_filename):
        print(f"Deleting {zip_filename}")
        os.remove(zip_filename)

    # Create a zip file
    with zipfile.ZipFile(zip_filename, 'w', zipfile.ZIP_DEFLATED) as zipf:
        for root, dirs, files in os.walk(output_folder):
            for file in files:
                zipf.write(os.path.join(root, file), os.path.relpath(os.path.join(root, file), output_folder))

    print(f"Build completed and zipped as {zip_filename}")

if __name__ == "__main__":
    main()
