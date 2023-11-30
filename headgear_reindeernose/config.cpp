#define _ARMA_

class CfgPatches
{
    class TC_GEAR
    {
        units[] = {};
        weapons[] = 
        {
            "TC_NVG_Headgear_ReindeerNose_1_Red",
            "TC_NVG_Headgear_ReindeerNose_1_Red_Toggle",
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
    };
};
class CfgWeapons
{
    class NVGoggles;
    class TC_NVG_Headgear_ReindeerNose_1_Red : NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Reindeer Nose (Glow)";
        descriptionShort = "Reindeer Nose";
        model = "\tc\headgear_reindeernose\reindeernose_red.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","NVG"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_reindeernose\reindeernose_red.p3d";
            modelOff = "\tc\headgear_reindeernose\reindeernose_red.p3d";
            mass = 5;
        };
    };
    class TC_NVG_Headgear_ReindeerNose_1_Glow : NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Reindeer Nose (Glow)";
        descriptionShort = "Reindeer Nose";
        model = "\tc\headgear_reindeernose\reindeernose_glow.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","NVG"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_reindeernose\reindeernose_glow.p3d";
            modelOff = "\tc\headgear_reindeernose\reindeernose_glow.p3d";
            mass = 5;
        };
    };
    class TC_NVG_Headgear_ReindeerNose_1_Glow_Toggle : NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Reindeer Nose (Glow Toggle)";
        descriptionShort = "Reindeer Nose";
        model = "\tc\headgear_reindeernose\reindeernose_red.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","NVG"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_reindeernose\reindeernose_glow.p3d";
            modelOff = "\tc\headgear_reindeernose\reindeernose_red.p3d";
            mass = 5;
        };
    };
};
class CfgGlasses
{
    class None;
    class TC_G_Headgear_ReindeerNose_1_Red: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Reindeer Nose (Red)";
        descriptionShort = "Reindeer Nose Red";
        model = "\tc\headgear_reindeernose\reindeernose_red.p3d";
        identityTypes[] = {};
        mass = 5;
    };
    class TC_G_Headgear_ReindeerNose_1_Glow: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Reindeer Nose (Glow)";
        descriptionShort = "Reindeer Nose Glow";
        model = "\tc\headgear_reindeernose\reindeernose_glow.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

