#define _ARMA_

class CfgPatches
{
	class TC_TOURIST
	{
		units[] = {
			"TC_U_Tourist_1",
			"TC_U_Tourist_2",
			"TC_U_Tourist_3",
			"TC_U_Tourist_4",
			"TC_U_Tourist_5",
		};
		weapons[] = {
		};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F" };
	};
};

class CfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class Uniform_Base;

	class TC_U_Tourist_Base : Uniform_Base
	{
		author = "Tyen";
		scope = 0;
		displayName = "Tourist";
		model = "\tc\tourist\uniform\uniform_tourist_1.p3d";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_Base";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Tourist_1 : TC_U_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Blue and Yellow Flowers)";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_1";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Tourist_2 : Uniform_Base
	{
		scope = 2;
		displayName = "Tourist (Red and White Flowers)";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_2";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Tourist_3 : Uniform_Base
	{
		scope = 2;
		displayName = "Tourist (Green and White Flowers)";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_3";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Tourist_4 : Uniform_Base
	{
		scope = 2;
		displayName = "Tourist (Light Blue Flowers)";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_4";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Tourist_5 : Uniform_Base
	{
		scope = 2;
		displayName = "Tourist (Red Palms)";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Tourist_5";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;

	class TC_B_Tourist_Base : B_Soldier_base_F
	{
		author = "Tyen";
		scope = 0;
		displayName = "Tourist (Base)";
		model = "\tc\tourist\uniform\uniform_tourist_1.p3d";
		uniformClass = "TC_U_Tourist_Base";
	};

	class TC_B_Tourist_1 : TC_B_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Blue and Yellow Flowers)";
		uniformClass = "TC_U_Tourist_1";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\tourist\uniform\data\t_uniform_tourist_1_co.paa"};
	};

	class TC_B_Tourist_2 : TC_B_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Red and White Flowers)";
		uniformClass = "TC_U_Tourist_2";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\tourist\uniform\data\t_uniform_tourist_2_co.paa"};
	};

	class TC_B_Tourist_3 : TC_B_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Green and White Flowers)";
		uniformClass = "TC_U_Tourist_3";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\tourist\uniform\data\t_uniform_tourist_3_co.paa"};
	};

	class TC_B_Tourist_4 : TC_B_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Light Blue Flowers)";
		uniformClass = "TC_U_Tourist_4";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\tourist\uniform\data\t_uniform_tourist_4_co.paa"};
	};

	class TC_B_Tourist_5 : TC_B_Tourist_Base
	{
		scope = 2;
		displayName = "Tourist (Red Palms)";
		uniformClass = "TC_U_Tourist_5";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\tourist\uniform\data\t_uniform_tourist_5_co.paa"};
	};
};