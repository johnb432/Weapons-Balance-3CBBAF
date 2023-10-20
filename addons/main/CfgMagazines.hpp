#if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
    #define MAG_PROXY \
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";\
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";\
        modelSpecialIsProxy = 1
#else
    #if __has_include("\hlc_wp_m60E4\config.bin")
        #define MAG_PROXY \
            model = "hlc_core\mesh\magazines\100rnd_762NATO_M60.p3d";\
            modelSpecial = "\hlc_core\mesh\magazines\proxies\50Rnd_762NATO_M60";\
            modelSpecialIsProxy = 1
    #endif
#endif

class CfgMagazines {
    class CA_Magazine;
    class 100Rnd_127x99_mag;
    class 100Rnd_127x99_mag_Tracer_Red;
    class 32Rnd_40mm_G_belt;
    class UK3CB_BAF_556_30Rnd;
    class UK3CB_BAF_556_30Rnd_Blank;
    class UK3CB_BAF_556_30Rnd_T;
    class UK3CB_BAF_762_L42A1_20Rnd;
    class UK3CB_BAF_762_L42A1_20Rnd_Blank;
    class UK3CB_BAF_762_L42A1_20Rnd_T;

    class UK3CB_BAF_762_L42A1_10Rnd: UK3CB_BAF_762_L42A1_20Rnd {
       mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_Blank: UK3CB_BAF_762_L42A1_20Rnd_Blank {
        mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_T: UK3CB_BAF_762_L42A1_20Rnd_T {
        mass = 8.9;
    };

    #ifdef MAG_PROXY
        class 150Rnd_762x51_Box;
        class 150Rnd_762x51_Box_Tracer;
        class UK3CB_BAF_762_100Rnd: 150Rnd_762x51_Box {
            MAG_PROXY;
        };
        class UK3CB_BAF_762_100Rnd_Blank: UK3CB_BAF_762_100Rnd {
            MAG_PROXY;
        };
        class UK3CB_BAF_762_100Rnd_T: 150Rnd_762x51_Box_Tracer {
            MAG_PROXY;
        };

        class UK3CB_BAF_762_200Rnd_Blank: UK3CB_BAF_762_100Rnd_Blank {
            mass = 62;
            MAG_PROXY;
        };
        class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd {
            mass = 62;
            MAG_PROXY;
        };
        class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T {
            mass = 62;
            MAG_PROXY;
        };

        class UK3CB_BAF_762_800Rnd_Blank: UK3CB_BAF_762_100Rnd_Blank {
            mass = 234.8;
            MAG_PROXY;
        };
        class UK3CB_BAF_762_800Rnd: UK3CB_BAF_762_100Rnd {
            mass = 234.8;
            MAG_PROXY;
        };
        class UK3CB_BAF_762_800Rnd_T: UK3CB_BAF_762_100Rnd_T {
            mass = 234.8;
            MAG_PROXY;
        };

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            class UK3CB_BAF_556_100Rnd_Blank: UK3CB_BAF_556_30Rnd_Blank {
                model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
                modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
                modelSpecialIsProxy = 1;
                reloadAction = "rhs_GestureReloadM249";
            };
            class UK3CB_BAF_556_100Rnd: UK3CB_BAF_556_30Rnd {
                model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
                modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
                modelSpecialIsProxy = 1;
                reloadAction = "rhs_GestureReloadM249";
            };
            class UK3CB_BAF_556_100Rnd_T: UK3CB_BAF_556_30Rnd_T {
                model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
                modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
                modelSpecialIsProxy = 1;
                reloadAction = "rhs_GestureReloadM249";
            };
        #endif
    #else
        class UK3CB_BAF_762_100Rnd;
        class UK3CB_BAF_762_100Rnd_Blank;
        class UK3CB_BAF_762_100Rnd_T;

        class UK3CB_BAF_762_200Rnd_Blank: UK3CB_BAF_762_100Rnd_Blank {
            mass = 62;
        };
        class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd {
            mass = 62;
        };
        class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T {
            mass = 62;
        };

        class UK3CB_BAF_762_800Rnd_Blank: UK3CB_BAF_762_100Rnd_Blank {
            mass = 234.8;
        };
        class UK3CB_BAF_762_800Rnd: UK3CB_BAF_762_100Rnd {
            mass = 234.8;
        };
        class UK3CB_BAF_762_800Rnd_T: UK3CB_BAF_762_100Rnd_T {
            mass = 234.8;
        };

        class UK3CB_BAF_556_100Rnd_Blank: UK3CB_BAF_556_30Rnd_Blank {
            reloadAction = "GestureReloadM200";
        };
        class UK3CB_BAF_556_100Rnd: UK3CB_BAF_556_30Rnd {
            reloadAction = "GestureReloadM200";
        };
        class UK3CB_BAF_556_100Rnd_T: UK3CB_BAF_556_30Rnd_T {
            reloadAction = "GestureReloadM200";
        };
    #endif

    class UK3CB_BAF_12G_Pellets: CA_Magazine {
        displayname = "12 Gauge 8Rnd Buckshot";
        mass = 8.8;
    };
    class UK3CB_BAF_12G_Slugs: UK3CB_BAF_12G_Pellets {
        displayname = "12 Gauge 8Rnd Slug";
    };

    #if __has_include("\hlc_wp_mp5\config.bin")
        class 30Rnd_9x21_Mag;
        class UK3CB_BAF_9_30Rnd: 30Rnd_9x21_Mag {
            model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
            modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
            modelSpecialIsProxy = 1;
        };
    #endif

    class UK3CB_BAF_127_10Rnd: 100Rnd_127x99_mag {
        mass = 28;
        type = 256;
    };

    class UK3CB_BAF_127_100Rnd: 100Rnd_127x99_mag_Tracer_Red {
        mass = 96;
        type = 256;
    };

    class UK3CB_BAF_32Rnd_40mm_G_Box: 32Rnd_40mm_G_belt {
        ace_arsenal_hide = -1;
        mass = 144;
    };
};
