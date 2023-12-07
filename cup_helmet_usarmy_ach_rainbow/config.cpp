#define _ARMA_

class CfgPatches
{
    class TC_H_CUPELMET_USARMY_ACH_RAINBOW
    {
        author = "Tyen";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
        units[] = {};
        weapons[] =
        {
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_RED",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREEN",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_BLUE",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_YELLOW",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_PURPLE",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_ORANGE",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_PINK",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI1",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI2",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI3",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI4",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREYLIGHT",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREYDARK",
            "TC_H_CUP_USArmy_HelmetACH_UCP_M81_RAINBOW"
        };
    };
};
class CfgWeapons
{
    // ACH Helmets
    class CUP_H_USArmy_HelmetACH_UCP;
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE : CUP_H_USArmy_HelmetACH_UCP
    {
        author = "Tyen";
        scope = 2;
        displayName = "ACH (M81 White)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_white_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_RED : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Red)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_red_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREEN : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Green)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_green_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_BLUE : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Blue)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_blue_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_YELLOW : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Yellow)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_yellow_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_PURPLE : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Purple)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_purple_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_ORANGE : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Orange)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_orange_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_PINK : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Pink)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_pink_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI1 : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Multi1)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_multi1_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI2 : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Multi2)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_multi2_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI3 : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Multi3)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_multi3_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_MULTI4 : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Multi4)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_multi4_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREYLIGHT : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Grey Light)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_greylight_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_GREYDARK : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Grey Dark)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_greydark_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
    class TC_H_CUP_USArmy_HelmetACH_UCP_M81_RAINBOW : TC_H_CUP_USArmy_HelmetACH_UCP_M81_WHITE
    {
        displayName = "ACH (M81 Rainbow)";
        hiddenSelectionsTextures[] = {"\tc\cup_helmet_usarmy_ach_rainbow\data\uniforms\ach_m81_rainbow_diffuse.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\h_gear_01_blk_co.paa"};
    };
};