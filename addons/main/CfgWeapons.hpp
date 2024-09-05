#pragma hemtt flag pe23_ignore_has_include

class asdg_OpticRail1913_long;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class hgun_P07_F;
    class SMG_02_F;
    class arifle_Mk20_plain_F;
    class LMG_RCWS;
    class HMG_M2;
    class srifle_EBR_F;
    class UK3CB_BAF_L105A2;
    class UK3CB_BAF_L110_Base;
    class UK3CB_BAF_Slung_Static_Weapon_Base;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        magazineWell[] += {"M240_762x51","CBA_762x51_LINKS"};
        class WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
        magazines[] = {"UK3CB_BAF_556_200Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","M249_556x45","CBA_556x45_MINIMI"};
    };
    class UK3CB_BAF_L110A1: UK3CB_BAF_L110_556_Base {
        class WeaponSlotsInfo {
            mass = 164;
        };
    };

    class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
        magazines[] = {"UK3CB_BAF_556_30Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo;
    };
    class UK3CB_BAF_L119A1: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            mass = 75.3;
        };
    };
    class UK3CB_BAF_L119A1_CQB: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            mass = 71.8;
        };
    };
    class UK3CB_BAF_L119A1_RIS: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            mass = 77.3;
        };
    };
    class UK3CB_BAF_L119A1_UKUGL: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110.3;
        };
    };

    class UK3CB_BAF_L128A1: srifle_EBR_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds","CBA_12g_7rnds","CBA_12g_8rnds"};
    };

    class UK3CB_BAF_L129A1: srifle_EBR_F {
        magazineWell[] += {"CBA_762x51_SR25","CBA_762x51_AR10"};
    };

    class srifle_GM6_F;
    class UK3CB_BAF_L135A1: srifle_GM6_F {
        magazineWell[] += {"CBA_50BMG_M107"};
    };

    class UK3CB_BAF_L1A1: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
        class WeaponSlotsInfo {
            mass = 95;
            class CowsSlot: asdg_OpticRailL1A1 {};
        };
    };

    class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
        magazineReloadTime = 0;
        magazineWell[] += {"M240_762x51","CBA_762x51_LINKS"};
    };

    class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
        magazines[] = {"UK3CB_BAF_556_30Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };

    class UK3CB_BAF_L22: UK3CB_BAF_L85A2 {
        class WeaponSlotsInfo {
            mass = 78;
        };
    };
    class UK3CB_BAF_L22A2: UK3CB_BAF_L22 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78;
        };
    };

    class UK3CB_BAF_L85A3: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo {
            mass = 82;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    };
    class UK3CB_BAF_L86A3: UK3CB_BAF_L86A2 {
        UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
    };

    class UK3CB_BAF_L91A1: SMG_02_F {
        displayName = "L91A1";
        magazineWell[] += {"CBA_9x19_MP5"};
        class WeaponSlotsInfo {
            mass = 68.3;
        };
    };
    class UK3CB_BAF_L92A1: UK3CB_BAF_L91A1 {
        displayName = "L92A1";
        class WeaponSlotsInfo {
            mass = 75;
        };
    };

    class UK3CB_BAF_L131A1: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_Glock_Full"};
    };
    class UK3CB_BAF_L9A1: hgun_P07_F {
        magazines[] += {"UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_17Rnd"};
    };
    class UK3CB_BAF_L105A1: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_P226"};
    };
    class UK3CB_BAF_L107A1: UK3CB_BAF_L105A1 {
        magazineWell[] += {"CBA_9x19_P226","CBA_9x19_P228"};
    };
    class UK3CB_BAF_L117A2: UK3CB_BAF_L105A2 {
        magazineWell[] += {"CBA_9x19_P226","CBA_9x19_P228"};
    };

    class UK3CB_BAF_L7A2_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
        magazines[] += {
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer"

            #if __has_include("\hlc_wp_m60E4\config.bin")
                ,
                "hlc_100Rnd_762x51_B_M60E4",
                "hlc_100Rnd_762x51_Mdim_M60E4",
                "hlc_100Rnd_762x51_M_M60E4",
                "hlc_100Rnd_762x51_Barrier_M60E4",
                "hlc_100Rnd_762x51_T_M60E4",
                "hlc_200Rnd_762x51_B_M60E4",
                "hlc_200Rnd_762x51_Mdim_M60E4",
                "hlc_200Rnd_762x51_M_M60E4",
                "hlc_200Rnd_762x51_Barrier_M60E4",
                "hlc_200Rnd_762x51_T_M60E4"
            #endif

            #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_common\config.cpp")
                ,
                "UK3CB_M60_100rnd_762x51_GT",
                "UK3CB_M60_100rnd_762x51_RT",
                "UK3CB_M60_100rnd_762x51_WT",
                "UK3CB_M60_100rnd_762x51_YT",
                "UK3CB_M60_100rnd_762x51_G",
                "UK3CB_M60_100rnd_762x51_R",
                "UK3CB_M60_100rnd_762x51_W",
                "UK3CB_M60_100rnd_762x51_Y",
                "UK3CB_M60_100rnd_762x51",
                "UK3CB_M60_100rnd_762x51_GM",
                "UK3CB_M60_100rnd_762x51_RM",
                "UK3CB_M60_100rnd_762x51_WM",
                "UK3CB_M60_100rnd_762x51_YM"
            #endif

            #if __has_include("\bwa3_common\config.bin")
                ,
                "BWA3_120Rnd_762x51_soft",
                "BWA3_120Rnd_762x51_Tracer_soft",
                "BWA3_120Rnd_762x51",
                "BWA3_120Rnd_762x51_Tracer",
                "BWA3_1200Rnd_762x51"
            #endif

            #if __has_include("\AMF_mag58\config.bin")
                ,
                "50Rnd_762x51_band",
                "50Rnd_mag58_mag",
                "50Rnd_mag58_mag_Tracer_green",
                "50Rnd_mag58_mag_Tracer_red",
                "50Rnd_mag58_mag_tracer_yellow",
                "75Rnd_mag58_mag",
                "75Rnd_mag58_mag_Tracer_green",
                "75Rnd_mag58_mag_Tracer_red",
                "75Rnd_mag58_mag_tracer_yellow"
            #endif
        };
    };


    class UK3CB_BAF_L111A1_veh: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};

        #if __has_include("\z\ace\addons\csw\CfgMagazines.hpp")
            magazines[] += {
                "ace_csw_100Rnd_127x99_mag",
                "ace_csw_100Rnd_127x99_mag_red",
                "ace_csw_100Rnd_127x99_mag_green",
                "ace_csw_100Rnd_127x99_mag_yellow"
            };
        #endif
    };

    class UK3CB_BAF_L111A1: UK3CB_BAF_Slung_Static_Weapon_Base {
        magazineWell[] += {"CBA_50BMG_100rnds"};

        #if __has_include("\z\ace\addons\csw\CfgMagazines.hpp")
            magazines[] += {
                "ace_csw_100Rnd_127x99_mag",
                "ace_csw_100Rnd_127x99_mag_red",
                "ace_csw_100Rnd_127x99_mag_green",
                "ace_csw_100Rnd_127x99_mag_yellow"
            };
        #endif
    };

    // 3CB BAF Vehicles
    class UK3CB_BAF_L112A1_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
        magazines[] += {
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer"

            #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
                ,
                "rhsusf_50Rnd_762x51",
                "rhsusf_50Rnd_762x51_m61_ap",
                "rhsusf_50Rnd_762x51_m62_tracer",
                "rhsusf_50Rnd_762x51_m80a1epr",
                "rhsusf_50Rnd_762x51_m82_blank",
                "rhsusf_50Rnd_762x51_m993",
                "rhsusf_100Rnd_762x51",
                "rhsusf_100Rnd_762x51_m61_ap",
                "rhsusf_100Rnd_762x51_m62_tracer",
                "rhsusf_100Rnd_762x51_m80a1epr",
                "rhsusf_100Rnd_762x51_m82_blank",
                "rhsusf_100Rnd_762x51_m993"
            #endif

            #if __has_include("\hlc_wp_m60E4\config.bin")
                ,
                "hlc_100Rnd_762x51_B_M60E4",
                "hlc_100Rnd_762x51_Mdim_M60E4",
                "hlc_100Rnd_762x51_M_M60E4",
                "hlc_100Rnd_762x51_Barrier_M60E4",
                "hlc_100Rnd_762x51_T_M60E4",
                "hlc_200Rnd_762x51_B_M60E4",
                "hlc_200Rnd_762x51_Mdim_M60E4",
                "hlc_200Rnd_762x51_M_M60E4",
                "hlc_200Rnd_762x51_Barrier_M60E4",
                "hlc_200Rnd_762x51_T_M60E4"
            #endif

            #if __has_include("\UK3CB_Factions\addons\UK3CB_Factions_common\config.cpp")
                ,
                "UK3CB_M60_100rnd_762x51_GT",
                "UK3CB_M60_100rnd_762x51_RT",
                "UK3CB_M60_100rnd_762x51_WT",
                "UK3CB_M60_100rnd_762x51_YT",
                "UK3CB_M60_100rnd_762x51_G",
                "UK3CB_M60_100rnd_762x51_R",
                "UK3CB_M60_100rnd_762x51_W",
                "UK3CB_M60_100rnd_762x51_Y",
                "UK3CB_M60_100rnd_762x51",
                "UK3CB_M60_100rnd_762x51_GM",
                "UK3CB_M60_100rnd_762x51_RM",
                "UK3CB_M60_100rnd_762x51_WM",
                "UK3CB_M60_100rnd_762x51_YM"
            #endif

            #if __has_include("\bwa3_common\config.bin")
                ,
                "BWA3_120Rnd_762x51_soft",
                "BWA3_120Rnd_762x51_Tracer_soft",
                "BWA3_120Rnd_762x51",
                "BWA3_120Rnd_762x51_Tracer",
                "BWA3_1200Rnd_762x51"
            #endif
        };
    };

    class UK3CB_BAF_L111A1_vehicle: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};

        #if __has_include("\z\ace\addons\csw\CfgMagazines.hpp")
            magazines[] += {
                "ace_csw_100Rnd_127x99_mag",
                "ace_csw_100Rnd_127x99_mag_red",
                "ace_csw_100Rnd_127x99_mag_green",
                "ace_csw_100Rnd_127x99_mag_yellow"
            };
        #endif
    };
};
