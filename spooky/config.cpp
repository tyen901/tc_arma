#define _ARMA_

class CfgPatches
{
    class TC_HEADGEAR
    {
        units[] = {};
        weapons[] = 
        {
            "TC_Helmet_Hat_NavySeer_1",
            "TC_Helmet_Hat_WitchCop_1"
        };
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
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

    class TC_Helmet_Hat_NavySeer: HelmetBase
    {
        scope = 2;
        author = "Tyen";
        displayName = "Navy Seer Hat";
        descriptionShort = "Navy Seer Hat";
        model = "\tc\spooky\hat_navyseer.p3d";
        hiddenSelections[] = 
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\spooky\data\t_hat_navyseer_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 40;
            allowedSlots[] = {901, 605};
            type = 605;
            hiddenSelections[] =
            {
                camo1
            };
            uniformModel = "\tc\spooky\hat_navyseer.p3d";
        };
    };

    class TC_Helmet_Hat_WitchCop: HelmetBase
    {
        scope = 2;
        author = "Tyen";
        displayName = "Witch Cop Hat";
        descriptionShort = "Witch Cop Hat";
        model = "\tc\spooky\hat_witchcop.p3d";
        hiddenSelections[] = 
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\spooky\data\t_hat_witchcop_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 40;
            allowedSlots[] = {901, 605};
            type = 605;
            hiddenSelections[] =
            {
                camo1
            };
            uniformModel = "\tc\spooky\hat_witchcop.p3d";
        };
    };
};
