#define _ARMA_

class CfgPatches
{
    class TC_GEAR
    {
        units[] = {};
        weapons[] = {
            "TC_Helmet_Antlers_1",
            "TC_NVG_Antlers_1",
            "TC_NVG_Antlers_1_Accessory_Lights_1",
            "TC_NVG_Antlers_1_Accessory_Netting_1",
            };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
    };
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;

	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};

	class H_HelmetB: ItemCore
	{
	  	class ItemInfo;
	};

    class TC_Helmet_Antlers_1 : HelmetBase
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers";
        descriptionShort = "Antlers";
        model = "\tc\headgear_antlers\antlers_1.p3d";
        class ItemInfo: ItemInfo
        {
            mass = 40;
            allowedSlots[] = {901, 605};
            type = 605;
            uniformModel = "\tc\headgear_antlers\antlers_1.p3d";
        };
    };

    // NVG Section
    class NVGoggles;
    class TC_NVG_Antlers_1: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers";
        descriptionShort = "Antlers";
        model = "\tc\headgear_antlers\antlers_1.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_antlers\antlers_1.p3d";
            modelOff = "\tc\headgear_antlers\antlers_1.p3d";
            mass = 5;
        };
    };
    class TC_NVG_Antlers_1_Accessory_Lights_1: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers 1 Lights (Rainbow)";
        descriptionShort = "Antler Lights";
        model = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_antlers\data\t_antlers_1_accessory_bulb_rainbow4.paa"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
            modelOff = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
            mass = 5;
            hiddenSelections[] =
            {
                camo1
            };
        };
    };
    class TC_NVG_Antlers_1_Accessory_Netting_1: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers 1 Netting (Camo)";
        descriptionShort = "Antler Netting";
        model = "\tc\headgear_antlers\antlers_1_accessory_netting_1.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_antlers\data\t_antlers_1_accessory_netting_1_co.paa"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_antlers\antlers_1_accessory_netting_1.p3d";
            modelOff = "\tc\headgear_antlers\antlers_1_accessory_netting_1.p3d";
            mass = 5;
            hiddenSelections[] =
            {
                camo1
            };
        };
    };
};

// Glasses Section
class CfgGlasses
{
    class None;
    class TC_G_Helmet_Antlers_1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers";
        descriptionShort = "Antlers";
        model = "\tc\headgear_antlers\antlers_1.p3d";
        identityTypes[] = {};
        mass = 5;
    };
    class TC_G_Hat_Antlers_1_Accessory_Lights_1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers 1 Lights (Rainbow)";
        descriptionShort = "Anter Lights";
        model = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
        identityTypes[] = {};
        mass = 5;
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_antlers\data\t_antlers_1_accessory_bulb_rainbow4.paa"};
    };
    class TC_G_Hat_Antlers_1_Accessory_Netting_1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Antlers 1 Netting (Camo)";
        descriptionShort = "Antler Netting";
        model = "\tc\headgear_antlers\antlers_1_accessory_netting_1.p3d";
        identityTypes[] = {};
        mass = 5;
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_antlers\data\t_antlers_1_accessory_netting_1_co.paa"};
    };
};

