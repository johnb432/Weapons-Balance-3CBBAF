#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "UK3CB_BAF_Weapons_Accessories",
            "UK3CB_BAF_Weapons_Ammo",
            "UK3CB_BAF_Weapons_L1a1",
            "UK3CB_BAF_Weapons_L7",
            "UK3CB_BAF_Weapons_L9A1",
            "UK3CB_BAF_Weapons_L85A3",
            "UK3CB_BAF_Weapons_L105A1",
            "UK3CB_BAF_Weapons_L110",
            "UK3CB_BAF_Weapons_L115",
            "UK3CB_BAF_Weapons_L119",
            "UK3CB_BAF_Weapons_L129",
            "UK3CB_BAF_Weapons_L131A1",
            "UK3CB_BAF_Weapons_Launchers",
            "UK3CB_BAF_Weapons_SmallArms",
            "UK3CB_BAF_Weapons_Static",
            "UK3CB_BAF_Vehicles_Weapons"
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

class BettIR_Config {
    class CompatibleNightvisionGoggles {
        class UK3CB_BAF_HMNVS {
            offset[] = {0, 0.15, 0.14};
        };
    };

    class CompatibleAttachments {
        class uk3cb_baf_llm_ir_black {
            offset[] = {0.15, 0.22, 0.25};
        };
        class uk3cb_baf_llm_ir_tan {
            offset[] = {0.15, 0.22, 0.25};
        };
    };
};
