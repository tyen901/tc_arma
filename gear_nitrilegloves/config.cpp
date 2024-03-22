#define _ARMA_

class CfgPatches
{
    class TC_GEAR
    {
        units[] = {};
        weapons[] = {
            "TC_NVG_NitrileGloves_1",
            "TC_G_NitrileGloves_1",
            };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
    };
};

class CfgWeapons
{
    class NVGoggles;
    class TC_NVG_NitrileGloves_1: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Nitrile Gloves";
        descriptionShort = "Nitrile Gloves";
        model = "\tc\gear_nitrilegloves\nitrilegloves.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\gear_nitrilegloves\nitrilegloves.p3d";
            modelOff = "\tc\gear_nitrilegloves\nitrilegloves.p3d";
            mass = 5;
        };
    };
};

// Glasses Section
class CfgGlasses
{
    class None;
    class TC_G_NitrileGloves_1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Nitrile Gloves";
        descriptionShort = "Nitrile Gloves";
        model = "\tc\gear_nitrilegloves\nitrilegloves.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

