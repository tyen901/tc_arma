#define _ARMA_

#define SANTA_HAT_HELMET_VARIATION(PARENT, NAME, NICE_NAME, TEXTURE) \
    class NAME : PARENT \
    { \
        displayName = NICE_NAME; \
        hiddenSelectionsTextures[] = {TEXTURE}; \
    }

#define SANTA_HAT_NVG_VARIATION(PARENT, NAME, NICE_NAME, TEXTURE) \
    class NAME : PARENT \
    { \
        displayName = NICE_NAME; \
        hiddenSelectionsTextures[] = {TEXTURE}; \
    }

#define SANTA_HAT_GLASSES_VARIATION(PARENT, NAME, NICE_NAME, TEXTURE) \
    class NAME : PARENT \
    { \
        displayName = NICE_NAME; \
        hiddenSelectionsTextures[] = {TEXTURE}; \
    }

class CfgPatches
{
    class TC_HEADGEAR
    {
        units[] = {};
        weapons[] = 
        {
            "TC_Helmet_Hat_Santa1",
            "TC_Helmet_Hat_Santa1_BluePattern1",
            "TC_Helmet_Hat_Santa1_FestivePattern1",
            "TC_Helmet_Hat_Santa1_Buffalo1",
            "TC_Helmet_Hat_Santa1_Camo_Aus1",
            "TC_Helmet_Hat_Santa1_Camo_Cadpat1",
            "TC_Helmet_Hat_Santa1_Camo_Tigerstripe1",
            "TC_Helmet_Hat_Santa1_Garf1",
            "TC_Helmet_Hat_Santa1_Missing1",
            "TC_Helmet_Hat_Santa1_Pink1",
            "TC_Helmet_Hat_Santa1_Stealth1",
            "TC_Helmet_Hat_Santa1_Pride1",
            "TC_Helmet_Hat_Santa1_Trans1",
            "TC_Helmet_Hat_Santa1_Bi1",
            "TC_Helmet_Hat_Santa1_Nb1",
        };
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "A3_Characters_F",
            "A3_Data_F",
            "A3_Soft_F"
        };
    };
};

class CfgWeapons
{
    /* Inheritance Tree */
	class ItemCore;
	class HeadgearItem;

    /* Bases */
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};

    /* Items */
	class H_HelmetB: ItemCore
	{
	  	class ItemInfo;
	};

    class TC_Helmet_Hat_Santa1: HelmetBase
    {
        scope = 2;
        author = "Tyen";
        displayName = "Santa Hat (Red)";
        descriptionShort = "Festive Santa Hat";
        model = "\tc\headgear_santahat\santahat.p3d";
        hiddenSelections[] = 
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_santa1.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 40;
            allowedSlots[] = {901, 605};
            type = 605;
            hiddenSelections[] =
            {
                camo1
            };
            uniformModel = "\tc\headgear_santahat\santahat.p3d";
        };
    };

    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_BluePattern1, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_blue_pattern1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_FestivePattern1, "Santa Hat (Festive Pattern)", "tc\headgear_santahat\data\t_santahat_co_festive_pattern1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Buffalo1, "Santa Hat (Buffalo)", "tc\headgear_santahat\data\t_santahat_co_buffalo1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Camo_Aus1, "Santa Hat (Camo Aus)", "tc\headgear_santahat\data\t_santahat_co_camo_aus1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Camo_Cadpat1, "Santa Hat (Camo Cadpat)", "tc\headgear_santahat\data\t_santahat_co_camo_cadpat1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Camo_Tigerstripe1, "Santa Hat (Camo Tigerstripe)", "tc\headgear_santahat\data\t_santahat_co_camo_tigerstripe1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Garf1, "Santa Hat (Garf)", "tc\headgear_santahat\data\t_santahat_co_garf1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Missing1, "Santa Hat (Missing)", "tc\headgear_santahat\data\t_santahat_co_missing1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Pink1, "Santa Hat (Pink)", "tc\headgear_santahat\data\t_santahat_co_pink1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Stealth1, "Santa Hat (Stealth)", "tc\headgear_santahat\data\t_santahat_co_stealth1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Pride1, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_pride1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Trans1, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_trans1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Bi1, "Santa Hat (Bi)", "tc\headgear_santahat\data\t_santahat_co_bi1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa1, TC_Helmet_Hat_Santa1_Nb1, "Santa Hat (Non Binary)", "tc\headgear_santahat\data\t_santahat_co_nb1.paa");

    class NVGoggles;
    class TC_NVG_Hat_Santa1 : NVGoggles
    {
        scope = 2;
        author = "Tyen";
        displayName = "Santa Hat (Red)";
        descriptionShort = "Festive Santa Hat";
        model = "\tc\headgear_santahat\santahat.p3d";
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        hiddenSelections[] =
        {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_santa1.paa"};
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\tc\headgear_santahat\santahat.p3d";
            modelOff = "\tc\headgear_santahat\santahat.p3d";
            mass = 5;
            hiddenSelections[] =
            {
                camo1
            };
        };
    };

    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_BluePattern, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_blue_pattern1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_FestivePattern1, "Santa Hat (Festive Pattern)", "tc\headgear_santahat\data\t_santahat_co_festive_pattern1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Buffalo1, "Santa Hat (Buffalo)", "tc\headgear_santahat\data\t_santahat_co_buffalo1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Camo_Aus1, "Santa Hat (Camo Aus)", "tc\headgear_santahat\data\t_santahat_co_camo_aus1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Camo_Cadpat1, "Santa Hat (Camo Cadpat)", "tc\headgear_santahat\data\t_santahat_co_camo_cadpat1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Camo_Tigerstripe1, "Santa Hat (Camo Tigerstripe)", "tc\headgear_santahat\data\t_santahat_co_camo_tigerstripe1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Garf1, "Santa Hat (Garf)", "tc\headgear_santahat\data\t_santahat_co_garf1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Missing1, "Santa Hat (Missing)", "tc\headgear_santahat\data\t_santahat_co_missing1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Pink1, "Santa Hat (Pink)", "tc\headgear_santahat\data\t_santahat_co_pink1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Stealth1, "Santa Hat (Stealth)", "tc\headgear_santahat\data\t_santahat_co_stealth1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Pride1, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_pride1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Trans1, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_trans1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Bi1, "Santa Hat (Bi)", "tc\headgear_santahat\data\t_santahat_co_bi1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa1, TC_NVG_Hat_Santa1_Nb1, "Santa Hat (Non Binary)", "tc\headgear_santahat\data\t_santahat_co_nb1.paa");
};

class CfgGlasses
{
    class None;
    class TC_Glasses_Hat_Santa1: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Santa Hat (Red)";
        descriptionShort = "Festive Santa Hat";
        model = "\tc\headgear_santahat\santahat.p3d";
        hiddenSelections[] = {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_santa1.paa"};
        identityTypes[] = {};
        mass = 5;
    };

    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_BluePattern, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_blue_pattern1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_FestivePattern1, "Santa Hat (Festive Pattern)", "tc\headgear_santahat\data\t_santahat_co_festive_pattern1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Buffalo1, "Santa Hat (Buffalo)", "tc\headgear_santahat\data\t_santahat_co_buffalo1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Camo_Aus1, "Santa Hat (Camo Aus)", "tc\headgear_santahat\data\t_santahat_co_camo_aus1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Camo_Cadpat1, "Santa Hat (Camo Cadpat)", "tc\headgear_santahat\data\t_santahat_co_camo_cadpat1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Camo_Tigerstripe1, "Santa Hat (Camo Tigerstripe)", "tc\headgear_santahat\data\t_santahat_co_camo_tigerstripe1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Garf1, "Santa Hat (Garf)", "tc\headgear_santahat\data\t_santahat_co_garf1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Missing1, "Santa Hat (Missing)", "tc\headgear_santahat\data\t_santahat_co_missing1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Pink1, "Santa Hat (Pink)", "tc\headgear_santahat\data\t_santahat_co_pink1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Stealth1, "Santa Hat (Stealth)", "tc\headgear_santahat\data\t_santahat_co_stealth1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Pride1, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_pride1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Trans1, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_trans1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Bi1, "Santa Hat (Bi)", "tc\headgear_santahat\data\t_santahat_co_bi1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa1, TC_Glasses_Hat_Santa1_Nb1, "Santa Hat (Non Binary)", "tc\headgear_santahat\data\t_santahat_co_nb1.paa");
};
