#define _ARMA_

class CfgPatches
{
	class TNC_uniforms
	{
		author = "Tyen";
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F"};
		units[] = {};
		weapons[] =
		{
			"TNC_U_CRYE_G3_M81_WHITE",
			"TNC_U_CRYE_G3_M81_RED",
			"TNC_U_CRYE_G3_M81_GREEN",
			"TNC_U_CRYE_G3_M81_BLUE",
			"TNC_U_CRYE_G3_M81_YELLOW",
			"TNC_U_CRYE_G3_M81_PURPLE",
			"TNC_U_CRYE_G3_M81_ORANGE",
		};
	};
};
class CfgVehicles
{
	class CUP_B_USArmy_Soldier_01;
	class TNC_CRYE_M81_BASE: CUP_B_USArmy_Soldier_01
	{
		author = "Tyen";
		dlc = "TNC_uniforms";
		scope = 1;
		scopeCurator = 0;
		displayName = "Soldier";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_mcam_v1_co.paa"};
		hiddenSelectionsMaterials[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_g3_mcam_v1.rvmat"};
	};
	class TNC_CRYE_WHITE: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_WHITE";
	};
	class TNC_CRYE_RED: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_RED";
	};
	class TNC_CRYE_GREEN: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_GREEN";
	};
	class TNC_CRYE_BLUE: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_BLUE";
	};
	class TNC_CRYE_YELLOW: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_YELLOW";
	};
	class TNC_CRYE_PURPLE: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_PURPLE";
	};
	class TNC_CRYE_ORANGE: TNC_CRYE_M81_BASE
	{
		uniformClass = "TNC_U_CRYE_G3_M81_ORANGE";
	};
};
class CfgWeapons
{
	class UniformItem;
	class CUP_U_B_US_BDU;

	//Crye G3 Uniforms
	class TNC_U_CRYE_G3_M81_BASE: CUP_U_B_US_BDU
	{
		author = "Tyen";
		scope = 2;
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
		displayName = "Crye M81 Base";
		allowedSlots[] = {901};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_mcam_v1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_M81_BASE";
		};
	};
	class TNC_U_CRYE_G3_M81_WHITE: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 White";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_white_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_WHITE";
		};
	};
	class TNC_U_CRYE_G3_M81_RED: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Red";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_red_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_RED";
		};
	};
	class TNC_U_CRYE_G3_M81_GREEN: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Green";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_green_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_GREEN";
		};
	};
	class TNC_U_CRYE_G3_M81_BLUE: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Blue";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_blue_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_BLUE";
		};
	};
	class TNC_U_CRYE_G3_M81_YELLOW: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Yellow";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_yellow_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_YELLOW";
		};
	};
	class TNC_U_CRYE_G3_M81_PURPLE: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Purple";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_purple_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_PURPLE";
		};
	};
	class TNC_U_CRYE_G3_M81_ORANGE: TNC_U_CRYE_G3_M81_BASE
	{
		displayName = "Crye M81 Orange";
		hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_orange_diffuse.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "TNC_CRYE_ORANGE";
		};
	};
};
