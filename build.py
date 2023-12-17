import os
import subprocess
import shutil
import subprocess

def run_pbo_project(input_folder, output_folder):
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
    

def main():
    # Set the current script directory as the input folder
    script_dir = os.path.dirname(os.path.abspath(__file__))

    # Set the output folder within the same directory named 'build'
    output_folder = os.path.join(script_dir, 'build')

    # Delete the output folder if it exists, recursively
    if os.path.exists(output_folder):
        print(f"Deleting {output_folder}")
        shutil.rmtree(output_folder)
    
    run_pbo_project(script_dir, output_folder)

if __name__ == "__main__":
    main()
