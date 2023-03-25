#define _ARMA_

class CfgPatches
{
	class TNC_uniforms
	{
		author = "Tyen";
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F"};
		units[] = {};
		weapons[] = {"TNC_CUP_CRYE_V1_Full"};
	};
};
class CfgVehicles
{
	class CUP_B_USArmy_Soldier_01;
	class TNC_CUP_CRYE_V1_Full: CUP_B_USArmy_Soldier_01
	{
		author = "Tyen";
		dlc = "TNC_uniforms";
		scope = 1;
		scopeCurator = 0;
		displayName = "Soldier";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "TNC_CUP_CRYE_V1_Full";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_mcam_v1_co.paa"};
		hiddenSelectionsMaterials[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_g3_mcam_v1.rvmat"};
	};
};
class CfgWeapons
{
	class UniformItem;
	class CUP_U_B_US_BDU;

	//Crye G3 Uniforms
	class CUP_U_CRYE_V1_Full: CUP_U_B_US_BDU
	{
		author = "Tyen";
		dlc = "TNC_uniforms";
		scope = 2;
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
		displayName = "Crye AAAAAAAAAA Full";
		allowedSlots[] = {901};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_mcam_v1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TNC_CUP_CRYE_V1_Full";
			containerClass = "Supply40";
			mass = 20;
		};
	};
};
