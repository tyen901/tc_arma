#define _ARMA_

#define SANTA_HAT_HELMET_VARIATION(NAME, NICE_NAME, TEXTURE) \
    class ##NAME## : TC_Helmet_Hat_Santa \
    { \
        displayName = ##NICE_NAME##; \
        hiddenSelectionsTextures[] = {##TEXTURE##}; \
    }

#define SANTA_HAT_NVG_VARIATION(NAME, NICE_NAME, TEXTURE) \
    class ##NAME## : TC_NVG_Hat_Santa \
    { \
        displayName = ##NICE_NAME##; \
        hiddenSelectionsTextures[] = {##TEXTURE##}; \
    }

#define SANTA_HAT_GLASSES_VARIATION(NAME, NICE_NAME, TEXTURE) \
    class ##NAME## : TC_Glasses_Hat_Santa_Base \
    { \
        displayName = ##NICE_NAME##; \
        hiddenSelectionsTextures[] = {##TEXTURE##}; \
    }

class CfgPatches
{
    class TC_HEADGEAR
    {
        units[] = {};
        weapons[] = 
        {
            "TC_NVG_Hat_Santa"
        };
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "A3_Characters_",
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

    class TC_Helmet_Hat_Santa: HelmetBase
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
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_red1.paa"};
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

    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_BluePattern, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_bluepattern1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_CamoM81, "Santa Hat (Camo M81)", "tc\headgear_santahat\data\t_santahat_co_camo1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_MixedPattern, "Santa Hat (Mixed Pattern)", "tc\headgear_santahat\data\t_santahat_co_mixedpattern1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_FlagPride, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_flagpride1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_FlagTrans, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_flagtrans1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_RedPattern1, "Santa Hat (Red Pattern 1)", "tc\headgear_santahat\data\t_santahat_co_redpattern1.paa");
    SANTA_HAT_HELMET_VARIATION(TC_Helmet_Hat_Santa_RedPattern2, "Santa Hat (Red Pattern 2)", "tc\headgear_santahat\data\t_santahat_co_redpattern2.paa");
    
    class NVGoggles;
    class TC_NVG_Hat_Santa : NVGoggles
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
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_red1.paa"};
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

    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_BluePattern, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_bluepattern1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_CamoM81, "Santa Hat (Camo M81)", "tc\headgear_santahat\data\t_santahat_co_camo1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_MixedPattern, "Santa Hat (Mixed Pattern)", "tc\headgear_santahat\data\t_santahat_co_mixedpattern1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_FlagPride, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_flagpride1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_FlagTrans, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_flagtrans1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_RedPattern1, "Santa Hat (Red Pattern 1)", "tc\headgear_santahat\data\t_santahat_co_redpattern1.paa");
    SANTA_HAT_NVG_VARIATION(TC_NVG_Hat_Santa_RedPattern2, "Santa Hat (Red Pattern 2)", "tc\headgear_santahat\data\t_santahat_co_redpattern2.paa");
};

class CfgGlasses
{
    class None;
    class TC_Glasses_Hat_Santa_Base: None
    {
        scope = 2;
        author = "Tyen";
        displayName = "Santa Hat (Red)";
        descriptionShort = "Festive Santa Hat";
        model = "\tc\headgear_santahat\santahat.p3d";
        hiddenSelections[] = {
            camo1
        };
        hiddenSelectionsTextures[] = {"tc\headgear_santahat\data\t_santahat_co_red1.paa"};
        identityTypes[] = {};
        mass = 5;
    };

    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_BluePattern, "Santa Hat (Blue Pattern)", "tc\headgear_santahat\data\t_santahat_co_bluepattern1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_CamoM81, "Santa Hat (Camo M81)", "tc\headgear_santahat\data\t_santahat_co_camo1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_FestivePattern, "Santa Hat (Festive Pattern)", "tc\headgear_santahat\data\t_santahat_co_mixedpattern1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_FlagPride, "Santa Hat (Pride)", "tc\headgear_santahat\data\t_santahat_co_flagpride1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_FlagTrans, "Santa Hat (Trans)", "tc\headgear_santahat\data\t_santahat_co_flagtrans1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_RedPattern1, "Santa Hat (Red Pattern 1)", "tc\headgear_santahat\data\t_santahat_co_redpattern1.paa");
    SANTA_HAT_GLASSES_VARIATION(TC_Glasses_Hat_Santa_RedPattern2, "Santa Hat (Red Pattern 2)", "tc\headgear_santahat\data\t_santahat_co_redpattern2.paa");
};
