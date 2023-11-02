#define _ARMA_

class CfgPatches
{
    class TNC_GEAR
    {
        units[] = {};
        weapons[] = {
            "TNC_NVG_Hat_Pumpkin",
            };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F", "A3_Props_F_Decade_Humanitarian"};
    };
};
class CfgWeapons
{
    class NVGoggles;
    class TNC_NVG_Hat_Pumpkin: NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin Hat (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\TNC\tnc_headwear_pumpkin\hat_pumpkin.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\TNC\tnc_headwear_pumpkin\hat_pumpkin.p3d";
            modelOff = "\TNC\tnc_headwear_pumpkin\hat_pumpkin.p3d";
            mass = 5;
        };
    };
};
class CfgGlasses
{
    class None;
    class TNC_G_Hat_Pumpkin: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Pumpkin Hat (Halloween)";
        descriptionShort = "Pumpkin, Halloween";
        model = "\TNC\tnc_headwear_pumpkin\hat_pumpkin.p3d";
        identityTypes[] = {};
        mass = 5;
    };
};

