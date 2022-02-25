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
            "uk3cb_baf_weapons_static"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-3CBBAF";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
