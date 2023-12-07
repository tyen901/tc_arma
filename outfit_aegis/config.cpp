#define _ARMA_

class CfgPatches
{
    class TC_OUTFIT_AEGIS
    {
        author = "Tyen";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
        units[] =
        {
            "TC_acu_m81_sudan",
            "TC_acu_m81_sudan_rolled",
            "TC_guerilla_garb_m81_sudan",
            "TC_guerilla_jacket_m81_sudan",
            "TC_guerilla_tshirt_m81_sudan"
        };
    };
};
class CfgVehicles
{
    // ACU M81 Sudan
    class aegis_man_acu_m81;
    class TC_acu_m81_sudan : aegis_man_acu_m81
    {
        author = "Tyen";
        uniformClass = "TC_U_acu_m81_sudan";
        hiddenSelectionsTextures[] = {"tc\outfit_aegis\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };
    class aegis_man_acu_rs_m81;
    class TC_acu_rs_m81_sudan : aegis_man_acu_rs_m81
    {
        author = "Tyen";
        uniformClass = "TC_U_acu_rs_m81_sudan";
        hiddenSelectionsTextures[] = {"tc\outfit_aegis\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };

    // M81 Sudan
    class aegis_man_guerilla_garb_m81;
    class TC_guerilla_garb_m81_sudan : aegis_man_guerilla_garb_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Garb (M81 Sudan)";
        uniformClass = "TC_U_guerilla_garb_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa"};
    };
    class aegis_man_guerilla_jacket_m81;
    class TC_guerilla_jacket_m81_sudan : aegis_man_guerilla_jacket_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Jacket (M81 Sudan)";
        uniformClass = "TC_U_guerilla_jacket_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\a3_aegis\characters_f_aegis\uniforms\data\mcu_pants_m81_co.paa",
        };
    };
    class aegis_man_guerilla_tshirt_m81;
    class TC_guerilla_tshirt_m81_sudan : aegis_man_guerilla_tshirt_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla T-Shirt (M81 Sudan)";
        uniformClass = "TC_U_guerilla_tshirt_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_orange\uniforms\data\c_cloth1_olive_co.paa",
            "\tc\outfit_aegis\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
    };
};
class CfgWeapons
{
    class UniformItem;

    // M81 Sudan Assault Combat Uniform
    class aegis_acu_m81;
    class TC_U_acu_m81_sudan : aegis_acu_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan)";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_acu_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_acu_rs_m81;
    class TC_U_acu_rs_m81_sudan : aegis_acu_rs_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan, Rolled Sleeves)";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_acu_rs_m81_sudan";
            containerClass = "Supply60";
        };
    };

    // M81 Sudan Aegis Guerilla
    class aegis_guerilla_garb_m81;
    class TC_U_guerilla_garb_m81_sudan : aegis_guerilla_garb_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Garb M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_guerilla_garb_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_jacket_m81;
    class TC_U_guerilla_jacket_m81_sudan : aegis_guerilla_jacket_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Jacket M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_guerilla_jacket_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_tshirt_m81;
    class TC_U_guerilla_tshirt_m81_sudan : aegis_guerilla_tshirt_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla T-Shirt M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\outfit_aegis\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_guerilla_tshirt_m81_sudan";
            containerClass = "Supply60";
        };
    };
};