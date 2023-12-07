#define _ARMA_

class CfgPatches
{
    class TC_OUTFIT_CUP
    {
        author = "Tyen";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
        units[] =
        {
            "TC_CRYE_M81_WHITE_FULL",
            "TC_CRYE_M81_RED_FULL",
            "TC_CRYE_M81_GREEN_FULL",
            "TC_CRYE_M81_BLUE_FULL",
            "TC_CRYE_M81_YELLOW_FULL",
            "TC_CRYE_M81_PURPLE_FULL",
            "TC_CRYE_M81_ORANGE_FULL",
            "TC_CRYE_M81_PINK_FULL",
            "TC_CRYE_M81_MULTI1_FULL",
            "TC_CRYE_M81_MULTI2_FULL",
            "TC_CRYE_M81_MULTI3_FULL",
            "TC_CRYE_M81_MULTI4_FULL",
            "TC_CRYE_M81_GREYLIGHT_FULL",
            "TC_CRYE_M81_GREYDARK_FULL",
            "TC_CRYE_M81_RAINBOW_FULL",
            "TC_CRYE_M81_WHITE_ROLL",
            "TC_CRYE_M81_RED_ROLL",
            "TC_CRYE_M81_GREEN_ROLL",
            "TC_CRYE_M81_BLUE_ROLL",
            "TC_CRYE_M81_YELLOW_ROLL",
            "TC_CRYE_M81_PURPLE_ROLL",
            "TC_CRYE_M81_ORANGE_ROLL",
            "TC_CRYE_M81_PINK_ROLL",
            "TC_CRYE_M81_MULTI1_ROLL",
            "TC_CRYE_M81_MULTI2_ROLL",
            "TC_CRYE_M81_MULTI3_ROLL",
            "TC_CRYE_M81_MULTI4_ROLL",
            "TC_CRYE_M81_GREYLIGHT_ROLL",
            "TC_CRYE_M81_GREYDARK_ROLL",
            "TC_CRYE_M81_RAINBOW_ROLL"
        };
        weapons[] =
        {
            "TC_U_CRYE_M81_WHITE_FULL",
            "TC_U_CRYE_M81_RED_FULL",
            "TC_U_CRYE_M81_GREEN_FULL",
            "TC_U_CRYE_M81_BLUE_FULL",
            "TC_U_CRYE_M81_YELLOW_FULL",
            "TC_U_CRYE_M81_PURPLE_FULL",
            "TC_U_CRYE_M81_ORANGE_FULL",
            "TC_U_CRYE_M81_WHITE_ROLL",
            "TC_U_CRYE_M81_RED_ROLL",
            "TC_U_CRYE_M81_GREEN_ROLL",
            "TC_U_CRYE_M81_BLUE_ROLL",
            "TC_U_CRYE_M81_YELLOW_ROLL",
            "TC_U_CRYE_M81_PURPLE_ROLL",
            "TC_U_CRYE_M81_ORANGE_ROLL",
            "TC_H_ACH_M81_WHITE",
            "TC_H_ACH_M81_RED",
            "TC_H_ACH_M81_GREEN",
            "TC_H_ACH_M81_BLUE",
            "TC_H_ACH_M81_YELLOW",
            "TC_H_ACH_M81_PURPLE",
            "TC_H_ACH_M81_ORANGE"
        };
    };
};
class CfgVehicles
{
    // Crye Uniforms
    class CUP_CRYE_TAN_Full;
    class TC_CRYE_M81_WHITE_FULL : CUP_CRYE_TAN_Full
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier CRYE M81 White Full";
        uniformClass = "TC_U_CRYE_M81_WHITE_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_white_diffuse.paa"};
    };
    class TC_CRYE_M81_RED_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_RED_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_red_diffuse.paa"};
    };
    class TC_CRYE_M81_GREEN_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_GREEN_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_green_diffuse.paa"};
    };
    class TC_CRYE_M81_BLUE_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_BLUE_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_blue_diffuse.paa"};
    };
    class TC_CRYE_M81_YELLOW_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_YELLOW_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_yellow_diffuse.paa"};
    };
    class TC_CRYE_M81_PURPLE_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_PURPLE_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_purple_diffuse.paa"};
    };
    class TC_CRYE_M81_ORANGE_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_ORANGE_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_orange_diffuse.paa"};
    };
    class TC_CRYE_M81_PINK_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_PINK_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_pink_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI1_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI1_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi1_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI2_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI2_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi2_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI3_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI3_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi3_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI4_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI4_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi4_diffuse.paa"};
    };
    class TC_CRYE_M81_GREYLIGHT_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_GREYLIGHT_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greylight_diffuse.paa"};
    };
    class TC_CRYE_M81_GREYDARK_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_GREYDARK_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greydark_diffuse.paa"};
    };
    class TC_CRYE_M81_RAINBOW_FULL : TC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TC_U_CRYE_M81_RAINBOW_FULL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_rainbow_diffuse.paa"};
    };
    class CUP_CRYE_TAN_Roll;
    class TC_CRYE_M81_WHITE_ROLL : CUP_CRYE_TAN_Roll
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier";
        hiddenSelections[] = {"Camo", "insignia"};
        uniformClass = "TC_U_CRYE_M81_WHITE_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_white_diffuse.paa"};
        hiddenSelectionsMaterials[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_g3_mcam_v1.rvmat"};
    };
    class TC_CRYE_M81_RED_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_RED_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_red_diffuse.paa"};
    };
    class TC_CRYE_M81_GREEN_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_GREEN_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_green_diffuse.paa"};
    };
    class TC_CRYE_M81_BLUE_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_BLUE_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_blue_diffuse.paa"};
    };
    class TC_CRYE_M81_YELLOW_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_YELLOW_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_yellow_diffuse.paa"};
    };
    class TC_CRYE_M81_PURPLE_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_PURPLE_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_purple_diffuse.paa"};
    };
    class TC_CRYE_M81_ORANGE_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_ORANGE_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_orange_diffuse.paa"};
    };
    class TC_CRYE_M81_PINK_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_PINK_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_pink_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI1_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI1_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi1_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI2_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI2_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi2_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI3_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI3_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi3_diffuse.paa"};
    };
    class TC_CRYE_M81_MULTI4_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_MULTI4_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi4_diffuse.paa"};
    };
    class TC_CRYE_M81_GREYLIGHT_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_GREYLIGHT_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greylight_diffuse.paa"};
    };
    class TC_CRYE_M81_GREYDARK_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_GREYDARK_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greydark_diffuse.paa"};
    };
    class TC_CRYE_M81_RAINBOW_ROLL : TC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TC_U_CRYE_M81_RAINBOW_ROLL";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_rainbow_diffuse.paa"};
    };
};
class CfgWeapons
{
    class UniformItem;
    
    // Crye Multicolor
    class CUP_U_CRYE_TAN_Full;
    class TC_U_CRYE_M81_WHITE_FULL : CUP_U_CRYE_TAN_Full
    {
        scope = 2;
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        displayName = "Crye (M81 White) Full";
        allowedSlots[] = {901};
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_white_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_WHITE_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_RED_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Red) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_red_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_RED_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREEN_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Green) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_green_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREEN_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_BLUE_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Blue) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_blue_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_BLUE_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_YELLOW_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Yellow) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_yellow_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_YELLOW_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_PURPLE_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Purple) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_purple_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_PURPLE_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_ORANGE_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Orange) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_orange_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_ORANGE_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_PINK_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Pink) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_pink_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_PINK_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI1_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Multi1) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi1_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI1_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI2_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Multi2) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi2_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI2_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI3_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Multi3) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi3_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI3_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI4_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Multi4) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi4_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI4_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREYLIGHT_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Light Grey) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greylight_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREYLIGHT_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREYDARK_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Dark Grey) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greydark_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREYDARK_FULL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_RAINBOW_FULL : TC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye (M81 Rainbow) Full";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_rainbow_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_RAINBOW_FULL";
            containerClass = "Supply40";
        };
    };
    
    class CUP_U_CRYE_TAN_Roll;
    class TC_U_CRYE_M81_WHITE_ROLL : CUP_U_CRYE_TAN_Roll
    {
        scope = 2;
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        displayName = "Crye (M81 White) Rolled";
        allowedSlots[] = {901};
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_white_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_WHITE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_RED_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Red) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_red_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_RED_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREEN_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Green) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_green_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREEN_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_BLUE_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Blue) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_blue_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_BLUE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_YELLOW_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Yellow) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_yellow_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_YELLOW_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_PURPLE_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Purple) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_purple_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_PURPLE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_ORANGE_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Orange) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_orange_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_ORANGE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_PINK_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Pink) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_pink_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_PINK_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI1_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Multi1) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi1_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI1_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI2_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Multi2) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi2_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI2_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI3_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Multi3) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi3_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI3_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_MULTI4_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Multi4) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_multi4_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_MULTI4_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREYLIGHT_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Light Grey) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greylight_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREYLIGHT_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_GREYDARK_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Dark Grey) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_greydark_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_GREYDARK_ROLL";
            containerClass = "Supply40";
        };
    };
    class TC_U_CRYE_M81_RAINBOW_ROLL : TC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye (M81 Rainbow) Rolled";
        hiddenSelectionsTextures[] = {"tc\outfit_cup\data\uniforms\crye_g3_m81_rainbow_diffuse.paa"};
        class ItemInfo : UniformItem
        {
            uniformClass = "TC_CRYE_M81_RAINBOW_ROLL";
            containerClass = "Supply40";
        };
    };
    
    // ACH Helmets
    class CUP_H_USArmy_HelmetACH_UCP;
    class TC_H_ACH_M81_WHITE : CUP_H_USArmy_HelmetACH_UCP
    {
        author = "Tyen";
        scope = 2;
        displayName = "ACH (M81 White)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_white_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_RED : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Red)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_red_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_GREEN : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Green)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_green_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_BLUE : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Blue)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_blue_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_YELLOW : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Yellow)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_yellow_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_PURPLE : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Purple)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_purple_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_ORANGE : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Orange)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_orange_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_PINK : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Pink)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_pink_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_MULTI1 : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Multi1)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_multi1_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_MULTI2 : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Multi2)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_multi2_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_MULTI3 : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Multi3)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_multi3_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_MULTI4 : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Multi4)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_multi4_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_GREYLIGHT : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Grey Light)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_greylight_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_GREYDARK : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Grey Dark)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_greydark_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_ACH_M81_RAINBOW : TC_H_ACH_M81_WHITE
    {
        displayName = "ACH (M81 Rainbow)";
        hiddenSelectionsTextures[] = {"\tc\outfit_cup\data\uniforms\ach_m81_rainbow_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
};