#define _ARMA_

class CfgPatches
{
    class TC_AEGIS_OUTFIT_M81_SUDAN
    {
        author = "Tyen";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
        units[] =
        {
            "TC_aegis_man_acu_m81",
            "TC_aegis_man_acu_rs_m81_sudan",
            "TC_aegis_man_guerilla_garb_m81_sudan",
            "TC_aegis_man_guerilla_jacket_m81_sudan",
            "TC_aegis_man_guerilla_tshirt_m81_sudan"
        };
    };
};
class CfgVehicles
{
    // ACU M81 Sudan
    class aegis_man_acu_m81;
    class TC_aegis_man_acu_m81 : aegis_man_acu_m81
    {
        author = "Tyen";
        uniformClass = "TC_U_aegis_acu_m81_sudan";
        hiddenSelectionsTextures[] = {"tc\aegis_outfit_m81_sudan\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };
    class aegis_man_acu_rs_m81;
    class TC_aegis_man_acu_rs_m81_sudan : aegis_man_acu_rs_m81
    {
        author = "Tyen";
        uniformClass = "TC_U_aegis_acu_rs_m81_sudan";
        hiddenSelectionsTextures[] = {"tc\aegis_outfit_m81_sudan\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };

    // M81 Sudan
    class aegis_man_guerilla_garb_m81;
    class TC_aegis_man_guerilla_garb_m81_sudan : aegis_man_guerilla_garb_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Garb (M81 Sudan)";
        uniformClass = "TC_U_aegis_guerilla_garb_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa"};
    };
    class aegis_man_guerilla_jacket_m81;
    class TC_aegis_man_guerilla_jacket_m81_sudan : aegis_man_guerilla_jacket_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Jacket (M81 Sudan)";
        uniformClass = "TC_U_aegis_guerilla_jacket_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\a3_aegis\characters_f_aegis\uniforms\data\mcu_pants_m81_co.paa",
        };
    };
    class aegis_man_guerilla_tshirt_m81;
    class TC_aegis_man_guerilla_tshirt_m81_sudan : aegis_man_guerilla_tshirt_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla T-Shirt (M81 Sudan)";
        uniformClass = "TC_U_aegis_guerilla_tshirt_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_orange\uniforms\data\c_cloth1_olive_co.paa",
            "\tc\aegis_outfit_m81_sudan\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
    };
};
class CfgWeapons
{
    class UniformItem;

    // M81 Sudan Assault Combat Uniform
    class aegis_acu_m81;
    class TC_U_aegis_acu_m81_sudan : aegis_acu_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan)";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_aegis_man_acu_m81";
            containerClass = "Supply60";
        };
    };
    class aegis_acu_rs_m81;
    class TC_U_aegis_acu_rs_m81_sudan : aegis_acu_rs_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan, Rolled Sleeves)";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_aegis_man_acu_rs_m81_sudan";
            containerClass = "Supply60";
        };
    };

    // M81 Sudan Aegis Guerilla
    class aegis_guerilla_garb_m81;
    class TC_U_aegis_guerilla_garb_m81_sudan : aegis_guerilla_garb_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Garb M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_aegis_man_guerilla_garb_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_jacket_m81;
    class TC_U_aegis_guerilla_jacket_m81_sudan : aegis_guerilla_jacket_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Jacket M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_aegis_man_guerilla_jacket_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_tshirt_m81;
    class TC_U_aegis_guerilla_tshirt_m81_sudan : aegis_guerilla_tshirt_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla T-Shirt M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\tc\aegis_outfit_m81_sudan\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_aegis_man_guerilla_tshirt_m81_sudan";
            containerClass = "Supply60";
        };
    };
};