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
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
    };
};
class CfgWeapons
{
    /* Inheritance Tree */
	class ItemCore;
	class HeadgearItem;

    /* Bases */
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};

    /* Items */
	class H_HelmetB: ItemCore
	{
	  	class ItemInfo;
	};

    class TC_Helmet_HalloweenPumpkin: HelmetBase
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin (Halloween)";
        descriptionShort = "Spooky Pumpkin Hat";
        model = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
        class ItemInfo: ItemInfo
        {
            mass = 40;
            allowedSlots[] = {901, 605};
            type = 605;
            uniformModel = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
        };
    };

    class NVGoggles;
    class TC_NVG_HalloweenPumpkin: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
            modelOff = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
            mass = 5;
        };
    };
};
class CfgGlasses
{
    class None;
    class TC_G_HalloweenPumpkin: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\tc\headgear_pumpkin\halloween_pumpkin.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

