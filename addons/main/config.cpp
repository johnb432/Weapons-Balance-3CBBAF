#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uk3cb_baf_weapons_Accessories",
            "uk3cb_baf_weapons_Ammo",
            "uk3cb_baf_weapons_L1a1",
            "uk3cb_baf_weapons_L7",
            "uk3cb_baf_weapons_L9A1",
            "uk3cb_baf_weapons_L85a3",
            "uk3cb_baf_weapons_L105a1",
            "uk3cb_baf_weapons_L110",
            "uk3cb_baf_weapons_L115",
            "uk3cb_baf_weapons_L119",
            "uk3cb_baf_weapons_L129",
            "uk3cb_baf_weapons_L131a1",
            "uk3cb_baf_weapons_Launchers",
            "uk3cb_baf_weapons_SmallArms",
            "uk3cb_baf_weapons_static",
            "uk3cb_baf_vehicles_coyote_jackal",
            "uk3cb_baf_vehicles_Husky",
            "uk3cb_baf_vehicles_landrover",
            "uk3cb_baf_vehicles_panther",
            "uk3cb_baf_vehicles_MAN"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-3CBBAF";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        name = "Weapons Balance - 3CB BAF";
        author = "johnb43";
        tooltip = "Weapons Balance - 3CB BAF";
        tooltipOwned = "Weapons Balance - 3CB BAF";
        hideName = 0;
        hidePicture = 0;
        dir = "@wb_3cbbaf";
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-3CBBAF";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_3cbbaf\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_3cbbaf\addons\main\ui\logo_weapons_balance.paa";
        logoOver = "\z\wb_3cbbaf\addons\main\ui\logo_weapons_balance.paa";
        logoSmall = "\z\wb_3cbbaf\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_3cbbaf\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
