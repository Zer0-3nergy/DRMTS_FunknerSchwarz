// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlng.h for the primary calling header

#include "Vlng__pch.h"
#include "Vlng___024root.h"

void Vlng___024root___ico_sequent__TOP__0(Vlng___024root* vlSelf);

void Vlng___024root___eval_ico(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_ico\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vlng___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vlng___024root___ico_sequent__TOP__0(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___ico_sequent__TOP__0\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ce_out = vlSelfRef.clk_enable;
}

void Vlng___024root___eval_triggers__ico(Vlng___024root* vlSelf);

bool Vlng___024root___eval_phase__ico(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_phase__ico\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vlng___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vlng___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vlng___024root___eval_act(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_act\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlng___024root___nba_sequent__TOP__0(Vlng___024root* vlSelf);
void Vlng___024root___nba_sequent__TOP__1(Vlng___024root* vlSelf);
void Vlng___024root___nba_sequent__TOP__2(Vlng___024root* vlSelf);

void Vlng___024root___eval_nba(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_nba\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlng___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlng___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlng___024root___nba_sequent__TOP__2(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vlng__ConstPool__TABLE_hf7b05680_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_h34e3591b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hd94bf56e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hc763f3cb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_h792e9225_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hbe28b195_0;

VL_INLINE_OPT void Vlng___024root___nba_sequent__TOP__0(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___nba_sequent__TOP__0\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*38:0*/ DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0;
    DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg = 0;
    SData/*10:0*/ __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg = 0;
    CData/*6:0*/ __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = 0;
    CData/*5:0*/ __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = 0;
    CData/*6:0*/ __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = 0;
    CData/*5:0*/ __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = 0;
    CData/*1:0*/ __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = 0;
    CData/*6:0*/ __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = 0;
    CData/*5:0*/ __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = 0;
    CData/*6:0*/ __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = 0;
    CData/*5:0*/ __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = 0;
    CData/*1:0*/ __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v0;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v0 = 0;
    QData/*38:0*/ __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3;
    __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3 = 0;
    QData/*38:0*/ __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4;
    __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4 = 0;
    QData/*38:0*/ __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5;
    __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v0;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v0 = 0;
    SData/*15:0*/ __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2;
    __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2 = 0;
    SData/*15:0*/ __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v3;
    __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v3 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0;
    __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
    __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
    __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5;
    __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6;
    __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7;
    __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0;
    __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
    __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
    __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5;
    __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6;
    __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6 = 0;
    QData/*33:0*/ __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7;
    __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7 = 0;
    // Body
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v0 = 0U;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2 = 0U;
    __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 0U;
    __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0U;
    __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 0U;
    __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 0U;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v0 = 0U;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3 = 0U;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4 = 0U;
    __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5 = 0U;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg 
        = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg 
        = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    if (vlSelfRef.reset) {
        __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v0 = 1U;
        __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 1U;
        __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0 = 1U;
        __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v0 = 1U;
        __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = 0U;
        __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__validOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__validOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg = 1U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg = 1U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2_0_re = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__mulOut_re = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__gainOutDB = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__gainOutDB = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__c_vout_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr7 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn7_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg_0_re = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainOutareg1_re = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg1_re = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dout_1_re_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinRegVld = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg2_re = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accReg_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn5_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn5_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg5_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOut = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg0_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn7_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn7_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn6_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn5_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 = 0U;
    } else {
        if (vlSelfRef.clk_enable) {
            __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next_1
                [0U];
            __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2 = 1U;
            __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v3 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next_1
                [1U];
            __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [0U];
            __VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 1U;
            __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [1U];
            __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [2U];
            __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [3U];
            __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [0U];
            __VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4 = 1U;
            __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [1U];
            __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [2U];
            __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next
                [3U];
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next
                [0U];
            __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0;
            __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3 = 1U;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next
                [1U];
            __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0;
            __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4 = 1U;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next
                [2U];
            __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0;
            __VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5 = 1U;
            __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
                = ((2U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg) 
                          << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__vldOut_1));
            __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
                = ((2U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg) 
                          << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__vldOut_1));
            if (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld) {
                __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg 
                    = ((0x7feU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg) 
                                  << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld));
                vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd 
                    = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2;
            }
            __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg 
                = ((0x1feU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg) 
                              << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__c_vout_1));
            __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
                = ((0x7eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                             << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1));
            __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
                = ((0x3eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg) 
                             << 1U)) | (1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr4))));
            __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
                = ((0x7eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                             << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1));
            __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
                = ((0x3eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg) 
                             << 1U)) | (1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4))));
            __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
                = ((0x3eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg) 
                             << 1U)) | (1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr7))));
            __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
                = ((0x7eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                             << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn7_1));
            __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
                = ((0x7eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                             << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn7_1));
            __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
                = ((0x3eU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg) 
                             << 1U)) | (1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7))));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg 
                = vlSelfRef.In1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__validOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg) 
                         >> 1U));
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 
                = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
                   [3U]);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 
                = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
                   [3U]);
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__validOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg) 
                         >> 1U));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next;
            if (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg) {
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 
                    = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re1;
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 
                    = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re2;
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3 
                    = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re3;
            }
            if (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinRegVld) {
                vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2_0_re 
                    = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg_0_re;
            }
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__mulOut_re 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainOutareg1_re;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__vldAndRdy) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine 
                    = ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dout_1_re_1) 
                                    << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dout_1_re_1));
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__dataOut_1 
                = ((2U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg))
                    ? (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accOut_1)
                    : 0U);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP6_1;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__vldAndRdy) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine 
                    = ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__dataOut_1) 
                                    << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__dataOut_1));
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__gainOutDB 
                = (((QData)((IData)((3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__dataOut_1 
                                                         >> 0x10U))))))) 
                    << 0x20U) | (QData)((IData)((vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__dataOut_1 
                                                 << 0xfU))));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout3)
                    ? vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re3
                    : 0U);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__gainOutDB 
                = (((QData)((IData)((3U & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__dataOut_1 
                                                         >> 0x10U))))))) 
                    << 0x20U) | (QData)((IData)((vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__dataOut_1 
                                                 << 0xfU))));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_addout_reg;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__c_vout_1 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout3;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr7 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn7_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn6_1;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg 
                = vlSelfRef.In2;
            if ((0x100U & (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg))) {
                vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg_0_re 
                    = ((0x100U & (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg))
                        ? vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1
                       [1U] : 0U);
            }
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainOutareg1_re 
                = (((QData)((IData)((3U & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg1_re) 
                                                         >> 0xfU))))))) 
                    << 0x25U) | ((QData)((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg1_re)) 
                                 << 0x15U));
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2_next;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinRegVld;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accOut_1 
                = (0xffffU & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accReg_1 
                                      >> 0x11U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3)
                    ? 0U : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0);
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re3 
                = (0x3ffffU & ((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re2 
                                >> 1U) - vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re3));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6)
                    ? 0U : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__delayedSignals0);
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn6_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn6_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout3 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout2;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg1_re 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg2_re;
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dout_1_re_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp)
                    ? (0xffffU & (IData)((vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg 
                                          >> 0x11U)))
                    : 0U);
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinRegVld 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg) 
                         >> 8U));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accReg_1 
                = (0x3ffffffffULL & (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__vldOut_1)
                                       ? vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__dout_re_1
                                       : 0ULL) + ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__vldOut_1)
                                                   ? vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__dout_re_1
                                                   : 0ULL)));
        }
        if (((IData)(vlSelfRef.clk_enable) & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                                              >> 6U))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 
                = (((QData)((IData)((1U & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 
                                                   >> 0x20U))))) 
                    << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1);
        }
        if (((IData)(vlSelfRef.clk_enable) & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                                              >> 6U))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 
                = (((QData)((IData)((1U & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 
                                                   >> 0x20U))))) 
                    << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1);
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__dataOut_1 
                = ((2U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg))
                    ? (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accOut_1)
                    : 0U);
            if (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout2) {
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re3 
                    = (0x3ffffU & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re2 
                                   >> 1U));
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg2_re 
                = ((1U & ((IData)((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re 
                                   >> 0x24U)) | (0U 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re 
                                                             >> 0xfU))))))
                    ? (((IData)((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re 
                                 >> 0x24U)) & (0x1fffffU 
                                               != (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re 
                                                              >> 0xfU)))))
                        ? 0x8000U : (0xffffU & (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re)))
                    : 0x7fffU);
            vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg 
                = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg_next;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                         >> 6U));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                         >> 6U));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accOut_1 
                = (0xffffU & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accReg_1 
                                      >> 0x11U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout2 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout1;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re2 
                = (0x7ffffU & ((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re1 
                                >> 1U) - vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re2));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn5_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn5_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn5_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accAdderOut;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accAdderOut;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accReg_1 
                = (0x3ffffffffULL & (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__vldOut_1)
                                       ? vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__dout_re_1
                                       : 0ULL) + ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__vldOut_1)
                                                   ? vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__dout_re_1
                                                   : 0ULL)));
        }
        if (((IData)(vlSelfRef.clk_enable) & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                                              >> 6U))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 
                = (((QData)((IData)((1U & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 
                                                   >> 0x20U))))) 
                    << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1);
        }
        if (((IData)(vlSelfRef.clk_enable) & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                                              >> 6U))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 
                = (((QData)((IData)((1U & (IData)((vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 
                                                   >> 0x20U))))) 
                    << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1);
        }
        if (vlSelfRef.clk_enable) {
            if (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout1) {
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re2 
                    = (0x7ffffU & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re1 
                                   >> 1U));
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_mult_reg);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg6_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg) 
                         >> 6U));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 
                = (1U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg) 
                         >> 6U));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout1 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re1 
                = (0xfffffU & ((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re 
                                >> 3U) - vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re1));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4)
                    ? 0U : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0);
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP6_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7)
                    ? 0U : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg5_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accAdderOut;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accAdderOut;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1;
        }
        if (vlSelfRef.clk_enable) {
            if (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg) {
                vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re1 
                    = (0xfffffU & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re 
                                   >> 3U));
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn5_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn5_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn4_1;
        }
        if (vlSelfRef.clk_enable) {
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr3) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 = 0U;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = 1U;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = 0U;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din2_reg1)));
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr6) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 = 0U;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7 = 1U;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7 = 0U;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg5_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP5_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg4_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg 
                = (0x1ffffffffULL & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg 
                                     + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOut));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next;
            vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re 
                = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re_next;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals1;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg0_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals0;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals1;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP4_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOut = 0ULL;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg 
                = (0x7ffffffffULL & VL_MULS_QQQ(35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,18, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg)), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2))));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1)));
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals1;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg0_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP0_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__dataOut_1;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals0;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals1;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg 
                = (0x3ffffU & (((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 
                                             << 1U)) 
                                | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2) 
                               + ((0x20000U & (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 
                                               << 1U)) 
                                  | vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1)
                    ? vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1
                    : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0);
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals0;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals1;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1;
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals0;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1;
            } else {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals1;
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0;
            }
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 
                = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1)
                    ? vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1
                    : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0);
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn7_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn7_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn7_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn7_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn6_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn6_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn5_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn5_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1;
        }
        if (vlSelfRef.clk_enable) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
        }
        if (((IData)(vlSelfRef.clk_enable) & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP))) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0;
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1;
        }
    }
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v0) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[0U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[1U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[2U] = 0ULL;
    }
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[0U] 
            = __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v3;
    }
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[1U] 
            = __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v4;
    }
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[2U] 
            = __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg__v5;
    }
    vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg 
        = __Vdly__DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg;
    if (__VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[0U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[1U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[2U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[3U] = 0ULL;
    }
    if (__VdlySet__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[0U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[1U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[2U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[3U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7;
    }
    if (__VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v0) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[0U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[1U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[2U] = 0ULL;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[3U] = 0ULL;
    }
    if (__VdlySet__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[0U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v4;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[1U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v5;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[2U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v6;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[3U] 
            = __VdlyVal__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg__v7;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next_1[0U] 
        = (((~ (IData)((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                        [2U] >> 0x26U))) & ((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                                            [2U] 
                                                            >> 0x24U)))) 
                                            | (0x7fffU 
                                               == (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                                              [2U] 
                                                              >> 0x15U))))))
            ? 0x7fffU : (((IData)((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                   [2U] >> 0x26U)) 
                          & (3U != (3U & (IData)((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                                  [2U] 
                                                  >> 0x24U)))))
                          ? 0x8000U : (0xffffU & ((IData)(
                                                          (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                                           [2U] 
                                                           >> 0x15U)) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
                                                              [2U] 
                                                              >> 0x14U)))))));
    vlSelfRef.Out1 = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__validOut_1;
    __Vtableidx1 = ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg) 
                      << 5U) | (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg) 
                                 << 4U) | ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state) 
                        << 2U) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt)));
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next 
        = Vlng__ConstPool__TABLE_hf7b05680_0[__Vtableidx1];
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next 
        = Vlng__ConstPool__TABLE_h34e3591b_0[__Vtableidx1];
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next 
        = Vlng__ConstPool__TABLE_hd94bf56e_0[__Vtableidx1];
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next 
        = Vlng__ConstPool__TABLE_hc763f3cb_0[__Vtableidx1];
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1 
        = Vlng__ConstPool__TABLE_h792e9225_0[__Vtableidx1];
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1 
        = Vlng__ConstPool__TABLE_hbe28b195_0[__Vtableidx1];
    __Vtableidx2 = ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg) 
                      << 5U) | (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg) 
                                 << 4U) | ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__validOut_1) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state) 
                        << 2U) | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt)));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next 
        = Vlng__ConstPool__TABLE_hf7b05680_0[__Vtableidx2];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next 
        = Vlng__ConstPool__TABLE_h34e3591b_0[__Vtableidx2];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next 
        = Vlng__ConstPool__TABLE_hd94bf56e_0[__Vtableidx2];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next 
        = Vlng__ConstPool__TABLE_hc763f3cb_0[__Vtableidx2];
    DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1 
        = Vlng__ConstPool__TABLE_h792e9225_0[__Vtableidx2];
    DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1 
        = Vlng__ConstPool__TABLE_hbe28b195_0[__Vtableidx2];
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re1 
        = (0xfffffffffULL & ((((QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg) 
                                                   >> 0xfU)))) 
                               << 0x23U) | (((QData)((IData)(
                                                             (0x1fffffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg) 
                                                                               >> 0xfU))))))) 
                                             << 0xeU) 
                                            | (QData)((IData)(
                                                              (0x3fffU 
                                                               & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg) 
                                                                  >> 2U)))))) 
                             + (((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 
                                                             >> 0x22U))))) 
                                 << 0x23U) | (0x7ffffffffULL 
                                              & vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1))));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re2 
        = (0x1fffffffU & (((0x10000000U & ((IData)(
                                                   (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 
                                                    >> 0x22U)) 
                                           << 0x1cU)) 
                           | (0xfffffffU & (IData)(
                                                   (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 
                                                    >> 7U)))) 
                          + ((0x10000000U & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 
                                             << 1U)) 
                             | (0xfffffffU & vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2))));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re3 
        = (0xffffffU & (((0x800000U & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 
                                       >> 4U)) | (0x7fffffU 
                                                  & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 
                                                     >> 5U))) 
                        + ((0x800000U & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3 
                                         << 1U)) | 
                           (0x7fffffU & vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3))));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next[0U] 
        = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__mulOut_re;
    DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0 
        = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
        [0U];
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next[1U] 
        = DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0;
    DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0 
        = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg
        [1U];
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next[2U] 
        = DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0;
    vlSelfRef.Out2 = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__dataOut_1;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[0U] 
        = ((0U == vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg3_1)
            ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__gainOutDB);
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[1U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [0U];
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[2U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [1U];
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[3U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [2U];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[0U] 
        = ((0U == vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg6_1)
            ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__gainOutDB);
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[1U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [0U];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[2U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [1U];
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[3U] 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg
        [2U];
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine;
    }
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine_1;
    }
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 
        = ((1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state))) 
           && (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1));
    if ((((IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) 
          | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count)) 
         | (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count) {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next = 0U;
        }
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1 
        = DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0 
        = ((1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state))) 
           && (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1));
    if ((((IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) 
          | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count)) 
         | (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count) {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next = 0U;
        }
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1 
        = DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine;
    }
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine_1;
    }
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 
        = ((1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state))) 
           && (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1));
    if ((((IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) 
          | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count)) 
         | (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count) {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next = 0U;
        }
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1 
        = DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0 
        = ((1U & (~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state))) 
           && (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1));
    if ((((IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) 
          | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count)) 
         | (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count) {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_t_0_0)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_add_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next = 0U;
        }
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1 
        = DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v0) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1[0U] = 0U;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1[1U] = 0U;
    }
    if (__VdlySet__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2) {
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1[0U] 
            = __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v2;
        vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1[1U] 
            = __VdlyVal__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1__v3;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__vldAndRdy 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1) 
           & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__vldAndRdy 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__validOut_1) 
           & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1));
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0U;
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
    }
    if ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1) 
          != (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0)) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1) {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp 
                = (3U & ((IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0) 
                         - (IData)(1U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr = 1U;
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0U;
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
    }
    if ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1) 
          != (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0)) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1) {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp 
                = (3U & ((IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0) 
                         - (IData)(1U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr = 1U;
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr 
        = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0U;
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
    }
    if ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1) 
          != (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0)) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1) {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp 
                = (3U & ((IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0) 
                         - (IData)(1U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr = 1U;
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0U;
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
    }
    if ((((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1) 
          != (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0)) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1) {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp 
                = (3U & ((IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0) 
                         - (IData)(1U)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp));
        } else {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr = 1U;
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr 
        = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0;
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count_next 
        = (0x1ffU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg)
                      ? ((0x7fU > (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count))
                          ? ((IData)(1U) + (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count))
                          : 0U) : (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count)));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next_1[1U] 
        = vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1
        [0U];
    if (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld) {
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1_next = 0x25dU;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1_next = 0x2faU;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1_next = 0xf7a6U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1_next = 0xed31U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1_next = 0xab6U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1_next = 0x4fa8U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1_next = 0U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1_next = 0x7674U;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg_next 
            = (((QData)((IData)((0x7fffU & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg 
                                                                  >> 0x20U)))))))) 
                << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2_0_re;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & (((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2) 
                                         << 1U)) | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2)) 
                           + ((0x10000U & ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1) 
                                           << 1U)) 
                              | (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,17, vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2)))));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & ((((QData)((IData)(
                                                      (0x7fffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg 
                                                                                >> 0x20U)))))))) 
                                      << 0x21U) | vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg) 
                                    + vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg));
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg) 
               >> 0xaU);
    } else {
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2_next 
            = vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2;
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp = 0U;
    }
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg 
        = __Vdly__DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg;
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re 
        = (0x1fffffffffULL & VL_SHIFTRS_QQI(37,37,8, 
                                            ((QData)((IData)(
                                                             ((IData)(
                                                                      (0x1fffcU 
                                                                       == 
                                                                       (0x3fffcU 
                                                                        & vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1)))
                                                               ? 0x7fffU
                                                               : 
                                                              (0xffffU 
                                                               & ((vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1 
                                                                   >> 2U) 
                                                                  + 
                                                                  (1U 
                                                                   & (vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1 
                                                                      >> 1U))))))) 
                                             << 0x15U), 0x15U));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg 
        = __Vdly__DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg) 
           & (0U == (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count)));
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re_next 
        = (0x7fffffU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next)
                         ? vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3
                         : vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re));
}

VL_INLINE_OPT void Vlng___024root___nba_sequent__TOP__1(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___nba_sequent__TOP__1\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.clk_enable) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP3_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3)
                ? 0U : 0x8000U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP6_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6)
                ? 0U : 0x8000U);
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr3)
                ? 0U : 0x4f85U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP6_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr6)
                ? 0U : 0x5068U);
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2)
                    ? 0x1ea3eU : 0U) : 0x8b4U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP5_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5)
                    ? 0x1e7edU : 0U) : 0xba3U);
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1)
                    ? 0x1fcb7U : 0U) : 0x105U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP4_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4)
                    ? 0x1fa04U : 0U) : 0x2fbU);
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP0_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1)
                    ? 0x1ffc5U : 0U) : 7U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3)
                    ? 0x1fe9fU : 0U) : 0x93U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2)
                    ? 0x1ffcaU : 0U) : 0x11U);
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 
            = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1)
                ? ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1)
                    ? 0x1fffcU : 0U) : 1U);
    }
}

VL_INLINE_OPT void Vlng___024root___nba_sequent__TOP__2(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___nba_sequent__TOP__2\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr6 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr5 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 = 0U;
    } else if (vlSelfRef.clk_enable) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr2;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr5;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr6 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr5 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr4;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr3;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr2;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr1;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP 
        = ((~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1)) 
           & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1));
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
    }
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) {
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = 0U;
            } else {
                DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
                DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 
                    = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0)));
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
                    = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2));
            }
        } else if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP 
        = ((~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1)) 
           & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1));
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
    }
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0U;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) {
            if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1) {
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = 0U;
            } else {
                DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
                DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 
                    = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0)));
                vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
                    = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2));
            }
        } else if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = 0U;
        } else {
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1;
            DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP 
        = ((~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1)) 
           & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1));
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1;
    }
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1) {
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = 0U;
            } else {
                DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1;
                DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 
                    = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0)));
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
                    = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2));
            }
        } else if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1;
    }
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP 
        = ((~ (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1)) 
           & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1));
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1;
    }
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0U;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0U;
    if (((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) 
         | (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1))) {
        if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1) {
            if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1) {
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = 0U;
            } else {
                DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 
                    = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1;
                DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 
                    = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0)));
                vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
                    = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2));
            }
        } else if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = 0U;
        } else {
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 
                = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1;
            DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 
                = (3U & ((IData)(1U) + (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1)));
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
                = (1U & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1));
        }
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1;
    }
}

void Vlng___024root___eval_triggers__act(Vlng___024root* vlSelf);

bool Vlng___024root___eval_phase__act(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_phase__act\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlng___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlng___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlng___024root___eval_phase__nba(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_phase__nba\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlng___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__ico(Vlng___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__nba(Vlng___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__act(Vlng___024root* vlSelf);
#endif  // VL_DEBUG

void Vlng___024root___eval(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vlng___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("DECIMATOR.v", 42, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vlng___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlng___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("DECIMATOR.v", 42, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlng___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("DECIMATOR.v", 42, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlng___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlng___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlng___024root___eval_debug_assertions(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_debug_assertions\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.clk_enable & 0xfeU)))) {
        Verilated::overWidthError("clk_enable");}
    if (VL_UNLIKELY(((vlSelfRef.In2 & 0xfeU)))) {
        Verilated::overWidthError("In2");}
}
#endif  // VL_DEBUG
