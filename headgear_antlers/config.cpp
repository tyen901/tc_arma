#define _ARMA_

class CfgPatches
{
    class TC_GEAR
    {
        units[] = {};
        weapons[] = {
            "TC_NVG_Hat_Antlers_1_Accessory_Lights_1",
            };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
    };
};
class CfgWeapons
{
    class NVGoggles;
    class TC_NVG_Hat_Antlers_1_Accessory_Lights_1: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Anters 1 Lights (Rainbow)";
        descriptionShort = "Anter Lights";
        model = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_antlers\data\t_antlers_1_accessory_bulb_rainbow4.paa"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
            modelOff = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
            mass = 5;
            hiddenSelections[] =
            {
                camo1
            };
        };
        class AnimationSources
        {
            class ScrollSource
            {
                source = time;
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class UVAnimations
        {
            class ScrollUV
			{
				type="translation";
				source="ScrollSource";
				sourceAddress="loop";
				section="camo1";
				minValue=0;
				maxValue=1.6;
				offset0[]={0,0};
				offset1[]={0.1,0.1};
			};
        };
    };
};
class CfgGlasses
{
    class None;
    class TC_G_Hat_Antlers_1_Accessory_Lights_1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Anters 1 Lights (Rainbow)";
        descriptionShort = "Anter Lights";
        model = "\tc\headgear_antlers\antlers_1_accessory_lights_1.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

