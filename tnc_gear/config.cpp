#define _ARMA_

class CfgPatches
{
	class TNC_GEAR
	{
		units[] = {};
		weapons[] = {"TNC_NVG_NitrileGloves_Blue"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
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
		model = "\TNC\tnc_gear\nitrile_gloves.p3d";
		modelOptics = "\A3\Weapons_F\empty";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\TNC\tnc_gear\nitrile_gloves.p3d";
			modelOff = "\TNC\tnc_gear\nitrile_gloves.p3d";
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
		model = "\TNC\tnc_gear\nitrile_gloves.p3d";
		identityTypes[] = {};
		mass = 5;
    };
};