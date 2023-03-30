#define _ARMA_

class CfgPatches
{
    class TNC_uniforms
    {
        author = "Tyen";
        requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Soft_F"};
        units[] =
        {
            "TNC_CRYE_M81_WHITE_FULL",
            "TNC_CRYE_M81_RED_FULL",
            "TNC_CRYE_M81_GREEN_FULL",
            "TNC_CRYE_M81_BLUE_FULL",
            "TNC_CRYE_M81_YELLOW_FULL",
            "TNC_CRYE_M81_PURPLE_FULL",
            "TNC_CRYE_M81_ORANGE_FULL",
            "TNC_CRYE_M81_WHITE_ROLL",
            "TNC_CRYE_M81_RED_ROLL",
            "TNC_CRYE_M81_GREEN_ROLL",
            "TNC_CRYE_M81_BLUE_ROLL",
            "TNC_CRYE_M81_YELLOW_ROLL",
            "TNC_CRYE_M81_PURPLE_ROLL",
            "TNC_CRYE_M81_ORANGE_ROLL",
            "TNC_acu_m81_sudan",
            "TNC_acu_m81_sudan_rolled",
            "TNC_guerilla_garb_m81_sudan",
            "TNC_guerilla_jacket_m81_sudan",
            "TNC_guerilla_tshirt_m81_sudan"
        };
        weapons[] =
        {
            "TNC_U_CRYE_M81_WHITE_FULL",
            "TNC_U_CRYE_M81_RED_FULL",
            "TNC_U_CRYE_M81_GREEN_FULL",
            "TNC_U_CRYE_M81_BLUE_FULL",
            "TNC_U_CRYE_M81_YELLOW_FULL",
            "TNC_U_CRYE_M81_PURPLE_FULL",
            "TNC_U_CRYE_M81_ORANGE_FULL",
            "TNC_U_CRYE_M81_WHITE_ROLL",
            "TNC_U_CRYE_M81_RED_ROLL",
            "TNC_U_CRYE_M81_GREEN_ROLL",
            "TNC_U_CRYE_M81_BLUE_ROLL",
            "TNC_U_CRYE_M81_YELLOW_ROLL",
            "TNC_U_CRYE_M81_PURPLE_ROLL",
            "TNC_U_CRYE_M81_ORANGE_ROLL",
            "TNC_H_ACH_M81_WHITE",
            "TNC_H_ACH_M81_RED",
            "TNC_H_ACH_M81_GREEN",
            "TNC_H_ACH_M81_BLUE",
            "TNC_H_ACH_M81_YELLOW",
            "TNC_H_ACH_M81_PURPLE",
            "TNC_H_ACH_M81_ORANGE",
        };
    };
};
class CfgVehicles
{
    class CUP_CRYE_TAN_Full;
    class TNC_CRYE_M81_WHITE_FULL: CUP_CRYE_TAN_Full
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier";
        hiddenSelections[] = {"Camo","insignia"};
        uniformClass = "TNC_U_CRYE_M81_WHITE_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_white_diffuse.paa"};
        hiddenSelectionsMaterials[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_g3_mcam_v1.rvmat"};
    };
    class TNC_CRYE_M81_RED_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_RED_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_red_diffuse.paa"};
    };
    class TNC_CRYE_M81_GREEN_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_GREEN_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_green_diffuse.paa"};
    };
    class TNC_CRYE_M81_BLUE_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_BLUE_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_blue_diffuse.paa"};
    };
    class TNC_CRYE_M81_YELLOW_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_YELLOW_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_yellow_diffuse.paa"};
    };
    class TNC_CRYE_M81_PURPLE_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_PURPLE_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_purple_diffuse.paa"};
    };
    class TNC_CRYE_M81_ORANGE_FULL : TNC_CRYE_M81_WHITE_FULL
    {
        uniformClass = "TNC_U_CRYE_M81_ORANGE_FULL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_orange_diffuse.paa"};
    };
    class CUP_CRYE_TAN_Roll;
    class TNC_CRYE_M81_WHITE_ROLL: CUP_CRYE_TAN_Roll
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier";
        hiddenSelections[] = {"Camo","insignia"};
        uniformClass = "TNC_U_CRYE_M81_WHITE_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_white_diffuse.paa"};
        hiddenSelectionsMaterials[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\delta\crye_g3_mcam_v1.rvmat"};
    };
    class TNC_CRYE_M81_RED_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_RED_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_red_diffuse.paa"};
    };
    class TNC_CRYE_M81_GREEN_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_GREEN_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_green_diffuse.paa"};
    };
    class TNC_CRYE_M81_BLUE_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_BLUE_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_blue_diffuse.paa"};
    };
    class TNC_CRYE_M81_YELLOW_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_YELLOW_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_yellow_diffuse.paa"};
    };
    class TNC_CRYE_M81_PURPLE_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_PURPLE_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_purple_diffuse.paa"};
    };
    class TNC_CRYE_M81_ORANGE_ROLL : TNC_CRYE_M81_WHITE_ROLL
    {
        uniformClass = "TNC_U_CRYE_M81_ORANGE_ROLL";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_orange_diffuse.paa"};
    };
   
    // ACU M81 Sudan
    class aegis_man_acu_m81;
    class TNC_acu_m81_sudan
    {
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier ACU (M81 Sudan)";
        uniformClass = "TNC_U_acu_m81";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };
    class aegis_man_acu_rs_m81;
    class TNC_acu_rs_m81_sudan
    {
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier ACU (M81 Sudan, Rolled Sleeves)";
        uniformClass = "TNC_U_acu_rs_m81";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa"};
    };

    // M81 Sudan
    class aegis_man_guerilla_garb_m81;
    class TNC_guerilla_garb_m81_sudan : aegis_man_guerilla_garb_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Garb (M81 Sudan)";
        uniformClass = "TNC_U_guerilla_garb_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa"};
    };
    class aegis_man_guerilla_jacket_m81;
    class TNC_guerilla_jacket_m81_sudan : aegis_man_guerilla_jacket_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla Jacket (M81 Sudan)";
        uniformClass = "TNC_U_guerilla_jacket_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
            "\a3_aegis\characters_f_aegis\uniforms\data\mcu_pants_m81_co.paa",
        };
    };
    class aegis_man_guerilla_tshirt_m81;
    class TNC_guerilla_tshirt_m81_sudan : aegis_man_guerilla_tshirt_m81
    {
        author = "Tyen";
        scope = 2;
        scopeCurator = 0;
        displayName = "Soldier Guerilla T-Shirt (M81 Sudan)";
        uniformClass = "TNC_U_guerilla_tshirt_m81_sudan";
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_orange\uniforms\data\c_cloth1_olive_co.paa",
            "\TNC\tnc_uniforms\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
    };
};
class CfgWeapons
{
    class UniformItem;
    class CUP_U_CRYE_TAN_Full;
    class TNC_U_CRYE_M81_WHITE_FULL: CUP_U_CRYE_TAN_Full
    {
        scope = 2;
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        displayName = "Crye M81 White (Full)";
        allowedSlots[] = {901};
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_white_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_WHITE_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_RED_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Red (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_red_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_RED_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_GREEN_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Green (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_green_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_GREEN_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_BLUE_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Blue (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_blue_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_BLUE_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_YELLOW_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Yellow (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_yellow_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_YELLOW_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_PURPLE_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Purple (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_purple_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_PURPLE_FULL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_ORANGE_FULL: TNC_U_CRYE_M81_WHITE_FULL
    {
        displayName = "Crye M81 Orange (Full)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_orange_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_ORANGE_FULL";
            containerClass = "Supply40";
        };
    };
    class CUP_U_CRYE_TAN_Roll;
    class TNC_U_CRYE_M81_WHITE_ROLL : CUP_U_CRYE_TAN_Roll
    {
        scope = 2;
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        displayName = "Crye M81 White (Rolled)";
        allowedSlots[] = {901};
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_white_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_WHITE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_RED_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Red (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_red_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_RED_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_GREEN_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Green (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_green_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_GREEN_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_BLUE_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Blue (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_blue_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_BLUE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_YELLOW_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Yellow (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_yellow_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_YELLOW_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_PURPLE_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Purple (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_purple_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_PURPLE_ROLL";
            containerClass = "Supply40";
        };
    };
    class TNC_U_CRYE_M81_ORANGE_ROLL : TNC_U_CRYE_M81_WHITE_ROLL
    {
        displayName = "Crye M81 Orange (Rolled)";
        hiddenSelectionsTextures[] = {"TNC\tnc_uniforms\data\uniforms\cyre_g3_m81_orange_diffuse.paa"};
        class ItemInfo: UniformItem
        {
            uniformClass = "TNC_CRYE_M81_ORANGE_ROLL";
            containerClass = "Supply40";
        };
    };
    
    // M81 Sudan Assault Combat Uniform
    class aegis_acu_m81;
    class TNC_U_acu_m81_sudan : aegis_acu_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan)";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TNC_acu_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_acu_rs_m81;
    class TNC_U_acu_rs_m81_sudan : aegis_acu_rs_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Assault Combat Uniform (M81 Sudan, Rolled Sleeves)";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\ia_soldier_01_clothing_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TNC_acu_rs_m81_sudan";
            containerClass = "Supply60";
        };
    };

    // M81 Sudan Aegis Guerilla
    class aegis_guerilla_garb_m81;
    class TNC_U_guerilla_garb_m81_sudan : aegis_guerilla_garb_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Garb M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TNC_guerilla_garb_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_jacket_m81;
    class TNC_U_guerilla_jacket_m81_sudan : aegis_guerilla_jacket_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla Jacket M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TNC_guerilla_jacket_m81_sudan";
            containerClass = "Supply60";
        };
    };
    class aegis_guerilla_tshirt_m81;
    class TNC_U_guerilla_tshirt_m81_sudan : aegis_guerilla_tshirt_m81
    {
        scope = 2;
        author = "Tyen";
        displayName = "Guerilla T-Shirt M81 Sudan";
        hiddenSelectionsTextures[] = {
            "\TNC\tnc_uniforms\data\uniforms\officer_spc_co_m81_sudan_diffuse.paa",
        };
        class ItemInfo : UniformItem
        {
            uniformClass = "TNC_guerilla_tshirt_m81_sudan";
            containerClass = "Supply60";
        };
    };
    
    class CUP_H_USArmy_HelmetACH_UCP;
    class TNC_H_ACH_M81_WHITE : CUP_H_USArmy_HelmetACH_UCP
    {
        author = "Tyen";
        scope = 2;
        displayName = "ACH M81 White";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_white_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_RED : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Red";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_red_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_GREEN : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Green";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_green_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_BLUE : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Blue";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_blue_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_YELLOW : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Yellow";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_yellow_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_PURPLE : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Purple";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_purple_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TNC_H_ACH_M81_ORANGE : TNC_H_ACH_M81_WHITE
    {
        displayName = "ACH M81 Orange";
        hiddenSelectionsTextures[] = {"\TNC\tnc_uniforms\data\uniforms\ach_m81_orange_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
};