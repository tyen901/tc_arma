#define _ARMA_

class CfgPatches
{
    class TC_WILDWEST
    {
        units[] = {};
        weapons[] = 
        {
            "TC_Helmet_CowboyHat1",
			"TC_Helmet_CowboyHat2",
			"TC_Helmet_CowboyHat3",
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

	// Base
	class TC_Helmet_CowboyHat_Base : HelmetBase
	{
		scope = 0;
		author = "Tyen";
		displayName = "Cowboy Hat";
		descriptionShort = "Cowboy Hat";
		model = "\tc\wildwest\gear\helmet_cowboyhat_1.p3d";
		hiddenSelections[] = 
		{
			camo1
		};

		class ItemInfo: ItemInfo
		{
			mass = 20;
            uniformModel = "\tc\wildwest\gear\helmet_cowboyhat_1.p3d";
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

    class TC_Helmet_CowboyHat1 : TC_Helmet_CowboyHat_Base
    {
        scope = 2;
		displayName = "Cowboy Hat (Black)";
		descriptionShort = "Cowboy Hat (Black)";
		model = "\tc\wildwest\gear\helmet_cowboyhat_1.p3d";
		hiddenSelectionsTextures[] = {"\tc\wildwest\gear\data\t_helmet_cowboyhat_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\tc\wildwest\gear\helmet_cowboyhat_1.p3d";
		};
	};

	class TC_Helmet_CowboyHat2 : TC_Helmet_CowboyHat_Base
	{
		scope = 2;
		displayName = "Cowboy Hat (White)";
		descriptionShort = "Cowboy Hat (White)";
		model = "\tc\wildwest\gear\helmet_cowboyhat_2.p3d";
		hiddenSelectionsTextures[] = {"\tc\wildwest\gear\data\t_helmet_cowboyhat_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\tc\wildwest\gear\helmet_cowboyhat_2.p3d";
		};
	};

	class TC_Helmet_CowboyHat3 : TC_Helmet_CowboyHat_Base
	{
		scope = 2;
		displayName = "Cowboy Hat (Brown)";
		descriptionShort = "Cowboy Hat (Brown)";
		model = "\tc\wildwest\gear\helmet_cowboyhat_3.p3d";
		hiddenSelectionsTextures[] = {"\tc\wildwest\gear\data\t_helmet_cowboyhat_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\tc\wildwest\gear\helmet_cowboyhat_3.p3d";
		};
	};
};
