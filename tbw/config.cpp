#define _ARMA_

#define HELMET_VARIATION(PARENT, NAME, NICE_NAME, TEXTURE) \
    class NAME : PARENT \
    { \
        displayName = NICE_NAME; \
        hiddenSelectionsTextures[] = {TEXTURE}; \
    }

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
        model = "\tc\tbw\hat_navyseer.p3d";
        hiddenSelections[] = 
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\tbw\data\t_hat_navyseer_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901, 605};
            type = 605;
            hiddenSelections[] =
            {
                camo1
            };
            uniformModel = "\tc\tbw\hat_navyseer.p3d";
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };

    HELMET_VARIATION(TC_Helmet_Hat_NavySeer, TC_Helmet_Hat_NavySeer_1_White, "Navy Seer Hat (White)", "tc\tbw\data\t_hat_navyseer_1_co_white.paa");
    HELMET_VARIATION(TC_Helmet_Hat_NavySeer, TC_Helmet_Hat_NavySeer_1_Black, "Navy Seer Hat (Black)", "tc\tbw\data\t_hat_navyseer_1_co_black.paa");
    HELMET_VARIATION(TC_Helmet_Hat_NavySeer, TC_Helmet_Hat_NavySeer_1_Grey, "Navy Seer Hat (Grey)", "tc\tbw\data\t_hat_navyseer_1_co_grey.paa");

    class TC_Helmet_Hat_WitchCop: HelmetBase
    {
        
        scope = 2;
        author = "Tyen";
        displayName = "Witch Cop Hat";
        descriptionShort = "Witch Cop Hat";
        model = "\tc\tbw\hat_witchcop.p3d";
        hiddenSelections[] = 
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\tbw\data\t_hat_witchcop_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901, 605};
            type = 605;
            hiddenSelections[] =
            {
                camo1
            };
            uniformModel = "\tc\tbw\hat_witchcop.p3d";
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };

    HELMET_VARIATION(TC_Helmet_Hat_WitchCop, TC_Helmet_Hat_WitchCop_1_White, "Witch Cop Hat (White)", "tc\tbw\data\t_hat_witchcop_1_co_white.paa");
    HELMET_VARIATION(TC_Helmet_Hat_WitchCop, TC_Helmet_Hat_WitchCop_1_Black, "Witch Cop Hat (Black)", "tc\tbw\data\t_hat_witchcop_1_co_black.paa");
    HELMET_VARIATION(TC_Helmet_Hat_WitchCop, TC_Helmet_Hat_WitchCop_1_Grey, "Witch Cop Hat (Grey)", "tc\tbw\data\t_hat_witchcop_1_co_grey.paa");
};
