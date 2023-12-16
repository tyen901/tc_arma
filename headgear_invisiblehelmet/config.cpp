#define _ARMA_

class CfgPatches
{
    class TC_HEADGEAR
    {
        units[] = {};
        weapons[] = 
        {
            "TC_Helmet_Invisible_Light",
            "TC_Helmet_Invisible_Medium",
            "TC_Helmet_Invisible_Heavy"
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
	
    //Base
	class TC_Helmet_Invisible_Base: H_HelmetB
	{
        author = "Tyen";
        displayName = "Helmet Invisible";
        descriptionShort = "Invisible Helmet";
        model = "\tc\headgear_invisiblehelmet\invisible.p3d";
        scope = 2;
		class ItemInfo: ItemInfo
		{
			mass = 20;
            uniformModel = "\tc\headgear_invisiblehelmet\invisible.p3d";
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

    // Light
	class TC_Helmet_Invisible_Light: TC_Helmet_Invisible_Base
	{
        displayName = "Helmet Invisible (Light)";
		class ItemInfo: ItemInfo
		{
			mass = 20;
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

    // Medium
    class TC_Helmet_Invisible_Medium: TC_Helmet_Invisible_Base
    {
        displayName = "Helmet Invisible (Medium)";
        class ItemInfo: ItemInfo
        {
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };

    // Heavy
    class TC_Helmet_Invisible_Heavy: TC_Helmet_Invisible_Base
    {
        displayName = "Helmet Invisible (Heavy)";
        class ItemInfo: ItemInfo
        {
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
};
