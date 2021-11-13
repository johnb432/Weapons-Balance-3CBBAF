class asdg_SlotInfo;

class PointerSlot;
class PointerSlot_rail: PointerSlot {
    class compatibleItems {
        uk3cb_baf_llm_flashlight_black = 1;
        uk3cb_baf_llm_flashlight_tan = 1;
        uk3cb_baf_llm_ir_black = 1;
        uk3cb_baf_llm_ir_tan = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        RKSL_optic_EOT552 = 1;
        RKSL_optic_EOT552_C = 1;
        RKSL_optic_EOT552X = 1;
        RKSL_optic_EOT552X_C = 1;
        RKSL_optic_LDS = 1;
        RKSL_optic_LDS_C = 1;
        RKSL_optic_LDS_C_PiP = 1;
        RKSL_optic_LDS_PiP = 1;
        RKSL_optic_PMII_312 = 1;
        RKSL_optic_PMII_312_des = 1;
        RKSL_optic_PMII_312_des_PiP = 1;
        RKSL_optic_PMII_312_PiP = 1;
        RKSL_optic_PMII_312_sunshade = 1;
        RKSL_optic_PMII_312_sunshade_des = 1;
        RKSL_optic_PMII_312_sunshade_des_PiP = 1;
        RKSL_optic_PMII_312_sunshade_PiP = 1;
        RKSL_optic_PMII_312_sunshade_wdl = 1;
        RKSL_optic_PMII_312_sunshade_wdl_PiP = 1;
        RKSL_optic_PMII_312_wdl = 1;
        RKSL_optic_PMII_312_wdl_PiP = 1;
        RKSL_optic_PMII_525 = 1;
        RKSL_optic_PMII_525_des = 1;
        RKSL_optic_PMII_525_des_PiP = 1;
        RKSL_optic_PMII_525_PiP = 1;
        RKSL_optic_PMII_525_wdl = 1;
        RKSL_optic_PMII_525_wdl_PiP = 1;
        RKSL_optic_RMR_MS19 = 1;
        RKSL_optic_RMR_MS19_FDE = 1;
        RKSL_optic_RMR_RM33 = 1;
        RKSL_optic_RMR_RM33_FDE = 1;
        UK3CB_BAF_Eotech = 1;
        UK3CB_BAF_Kite = 1;
        UK3CB_BAF_MaxiKite = 1;
        UK3CB_BAF_SB31250 = 1;
        UK3CB_BAF_SB31250_Desert = 1;
        UK3CB_BAF_SB31250_Desert_Ghillie = 1;
        UK3CB_BAF_SB31250_ghillie = 1;
        UK3CB_BAF_SpecterLDS = 1;
        UK3CB_BAF_SpecterLDS_3D = 1;
        UK3CB_BAF_SpecterLDS_Dot = 1;
        UK3CB_BAF_SpecterLDS_Dot_3D = 1;
        UK3CB_BAF_SUIT = 1;
        UK3CB_BAF_SUSAT = 1;
        UK3CB_BAF_SUSAT_3D = 1;
        UK3CB_BAF_TA31F = 1;
        UK3CB_BAF_TA31F_3D = 1;
        UK3CB_BAF_TA31F_hornbill = 1;
        UK3CB_BAF_TA31F_hornbill_3D = 1;
        UK3CB_BAF_TA648 = 1;
        UK3CB_BAF_TA648_308 = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems {};
};
class UK3CB_OpticRail1913_FNFAL: asdg_OpticRail {
    class compatibleItems {
        uk3cb_baf_suit = 1;
    };
};
class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        uk3cb_baf_suit = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_silencer_l91a1 = 1;
    };
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_bfa_l129 = 1;
        uk3cb_baf_silencer_l115a3 = 1;
        uk3cb_baf_bfa_l7 = 1;
        uk3cb_baf_bfa_l110 = 1;
    };
};
class asdg_MuzzleSlot_762_3CB: asdg_MuzzleSlot_762 {
    class compatibleItems: compatibleItems {};
};
class asdg_MuzzleSlot_762_L129_3CB: asdg_MuzzleSlot_762 {
    class compatibleItems: compatibleItems {};
};

class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_bfa_l85 = 1;
        uk3cb_baf_bfa_l110 = 1;
        uk3cb_baf_silencer_l85 = 1;
        uk3cb_baf_sffh = 1;
    };
};

class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_bfa_l85 = 1;
        uk3cb_baf_bfa_l110 = 1;
        uk3cb_baf_silencer_l85 = 1;
        uk3cb_baf_sffh = 1;
    };
};
class asdg_MuzzleSlot_556_3CB: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {};
};
class asdg_MuzzleSlot_556_limited_3CB: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {};
};
class asdg_MuzzleSlot_556_L110A2_3CB: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {};
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot {
    class compatibleItems {
        uk3cb_baf_bfa_l85 = 1;
        uk3cb_baf_bfa_l110 = 1;
        uk3cb_baf_silencer_l85 = 1;
        uk3cb_baf_sffh = 1;
    };
};
