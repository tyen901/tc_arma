#define _ARMA_

class CfgPatches
{
    class TC_GEAR
    {
        units[] = {};
        weapons[] = {
            "TC_NVG_Hat_Pumpkin",
            };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F", "A3_Props_F_Decade_Humanitarian"};
    };
};
class CfgWeapons
{
    class NVGoggles;
    class TC_NVG_Hat_Pumpkin: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin Hat (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\tc\headgear_pumpkin\pumpkin_halloween.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_pumpkin\pumpkin_halloween.p3d";
            modelOff = "\tc\headgear_pumpkin\pumpkin_halloween.p3d";
            mass = 5;
        };
    };
};
class CfgGlasses
{
    class None;
    class TC_G_Hat_Pumpkin: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin Hat (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\tc\headgear_pumpkin\pumpkin_halloween.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

