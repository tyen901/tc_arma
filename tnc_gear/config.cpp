#define _ARMA_

class CfgPatches
{
	class TNC_GEAR
	{
		units[] = {};
		weapons[] = {"TNC_NVG_NitrileGloves_Blue"};
		requiredVersion = 0.1;
		requiredAddons[] = {"simc_uaf_67","simc_uaf_69"};
	};
};
class CfgWeapons
{
	class NVGoggles;
	class TNC_NVG_NitrileGloves_Blue: NVGoggles
	{
		scope = 2;
		author = "Tyen";
		displayName = "Nitrile Gloves (Blue)";
		descriptionShort = "Glove, Nitrile";
		model = "\simc_uaf_69\nomex";
		picture = "\simc_uaf_67\icons\nomex_ca";
		hiddenSelections[] = {"nomex"};
		hiddenSelectionTextures[] = {"\TNC\tnc_gear\data\nitrile_gloves_blue_ca.paa"};
		hiddenSelectionsMaterials[] = {"\TNC\tnc_gear\data\nitrile_gloves.rvmat"};
		modelOptics = "\A3\Weapons_F\empty";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "simc_uaf_69\nomex";
			modelOff = "simc_uaf_69\nomex";
			hiddenSelections[] = {"nomex"};
			hiddenSelectionTextures[] = {"\TNC\tnc_gear\data\nitrile_gloves_blue_ca.paa"};
			hiddenSelectionsMaterials[] = {"\TNC\tnc_gear\data\nitrile_gloves.rvmat"};
			mass = 5;
		};
	};
};
class CfgGlasses
{
    class None;
    class TNC_G_NitrileGloves_Blue: None
    {
		scope = 2;
		author = "Tyen";
		displayName = "Nitrile Gloves (Blue)";
		descriptionShort = "Glove, Nitrile";
		model = "\simc_uaf_69\nomex";
		picture = "\simc_uaf_67\icons\nomex_ca";
		hiddenSelections[] = {"nomex"};
		hiddenSelectionTextures[] = {"\TNC\tnc_gear\data\nitrile_gloves_blue_ca.paa"};
        hiddenSelectionsMaterials[] = {"\TNC\tnc_gear\data\nitrile_gloves.rvmat"};
		identityTypes[] = {};
		mass = 5;
    };
};