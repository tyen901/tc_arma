#define _ARMA_

class CfgPatches
{
	class TC_MIRROR
	{
		units[] = {
			"TC_U_Mirror_1",
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

	class TC_U_Mirror_Base : Uniform_Base
	{
		author = "Tyen";
		scope = 0;
		displayName = "Mirrorform";
		model = "\tc\mirrorform\uniform\mirror.p3d";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Mirror_Base";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class TC_U_Mirror_1 : TC_U_Mirror_Base
	{
		scope = 2;
		displayName = "Mirrorform";
		class ItemInfo : UniformItem
		{
			uniformClass = "TC_B_Mirror_1";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;

	class TC_B_Mirror_Base : B_Soldier_base_F
	{
		author = "Tyen";
		scope = 0;
		displayName = "Mirrorform";
		model = "\tc\mirrorform\uniform\mirror.p3d";
		uniformClass = "TC_U_Mirror_Base";
	};

	class TC_B_Mirror_1 : TC_B_Mirror_Base
	{
		scope = 2;
		displayName = "Mirrorform";
		uniformClass = "TC_U_Mirror_1";
		hiddenSelections[] = {"hs_shirt"};
		hiddenSelectionsTextures[] = {"\tc\mirrorform\uniform\black.paa"};
	};
};