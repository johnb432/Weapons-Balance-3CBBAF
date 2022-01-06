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
    class UK3CB_BAF_762_100Rnd;
    class UK3CB_BAF_762_100Rnd_Blank;
    class UK3CB_BAF_762_100Rnd_T;

    class UK3CB_BAF_762_L42A1_10Rnd: UK3CB_BAF_762_L42A1_20Rnd {
       mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_Blank: UK3CB_BAF_762_L42A1_20Rnd_Blank {
        mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_T: UK3CB_BAF_762_L42A1_20Rnd_T {
        mass = 8.9;
    };

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

    class UK3CB_BAF_12G_Pellets: CA_Magazine {
        displayname = "12 Gauge 8Rnd Buckshot";
        mass = 8.8;
    };
    class UK3CB_BAF_12G_Slugs: UK3CB_BAF_12G_Pellets {
        displayname = "12 Gauge 8Rnd Slug";
    };

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
