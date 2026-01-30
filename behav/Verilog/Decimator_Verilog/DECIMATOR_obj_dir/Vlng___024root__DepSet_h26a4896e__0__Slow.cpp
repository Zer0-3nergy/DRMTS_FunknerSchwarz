// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlng.h for the primary calling header

#include "Vlng__pch.h"
#include "Vlng___024root.h"

VL_ATTR_COLD void Vlng___024root___eval_static(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_static\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vlng___024root___eval_initial__TOP(Vlng___024root* vlSelf);

VL_ATTR_COLD void Vlng___024root___eval_initial(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_initial\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlng___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vlng___024root___eval_initial__TOP(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_initial__TOP\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP0_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP3_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP6_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP5_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP4_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 = 0U;
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP6_1 = 0U;
}

VL_ATTR_COLD void Vlng___024root___eval_final(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_final\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__stl(Vlng___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlng___024root___eval_phase__stl(Vlng___024root* vlSelf);

VL_ATTR_COLD void Vlng___024root___eval_settle(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_settle\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vlng___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("DECIMATOR.v", 42, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlng___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__stl(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___dump_triggers__stl\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlng___024root___stl_sequent__TOP__0(Vlng___024root* vlSelf);

VL_ATTR_COLD void Vlng___024root___eval_stl(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_stl\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlng___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vlng__ConstPool__TABLE_hf7b05680_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_h34e3591b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hd94bf56e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hc763f3cb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_h792e9225_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlng__ConstPool__TABLE_hbe28b195_0;

VL_ATTR_COLD void Vlng___024root___stl_sequent__TOP__0(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___stl_sequent__TOP__0\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*38:0*/ DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0;
    DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h9ea45735__0 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0;
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
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_3 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_t_4 = 0;
    CData/*0:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_out2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_sub_temp = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_add_temp_2 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_0_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_1 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_2_0 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_3 = 0;
    CData/*1:0*/ DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4;
    DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_t_4 = 0;
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
    // Body
    vlSelfRef.Out2 = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__dataOut_1;
    vlSelfRef.Out1 = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__validOut_1;
    vlSelfRef.ce_out = vlSelfRef.clk_enable;
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
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg_next 
            = (0xffffffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg_next 
            = (0x1ffffU & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg_next 
            = (0x1ffffffffULL & vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg);
        vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp = 0U;
    }
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
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count_next 
        = (0x1ffU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg)
                      ? ((0x7fU > (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count))
                          ? ((IData)(1U) + (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count))
                          : 0U) : (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count)));
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
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1));
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accAdderOut 
        = (0x1ffffffffULL & (((0x20U & (IData)(vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg))
                               ? 0ULL : vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1) 
                             + vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1));
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
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg) 
           & (0U == (IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count)));
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
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
    }
    if (vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__delayLine;
        vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
    }
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
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine_1;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
    }
    if (vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state) {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = 0U;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
    } else {
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 
            = vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__delayLine;
        vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 0U;
        if (DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ctrl_1) {
            vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = 1U;
        }
    }
    DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1 
        = Vlng__ConstPool__TABLE_hbe28b195_0[__Vtableidx2];
    vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re_next 
        = (0x7fffffU & ((IData)(vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next)
                         ? vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3
                         : vlSelfRef.DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re));
    vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__vldAndRdy 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1) 
           & (IData)(DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__ready_1));
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
    vlSelfRef.DECIMATOR__DOT__u_HBF2__DOT__vldAndRdy 
        = ((IData)(vlSelfRef.DECIMATOR__DOT__u_HBF1__DOT__validOut_1) 
           & (IData)(DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__ready_1));
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
}

VL_ATTR_COLD void Vlng___024root___eval_triggers__stl(Vlng___024root* vlSelf);

VL_ATTR_COLD bool Vlng___024root___eval_phase__stl(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___eval_phase__stl\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlng___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlng___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__ico(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___dump_triggers__ico\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__act(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___dump_triggers__act\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlng___024root___dump_triggers__nba(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___dump_triggers__nba\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlng___024root___ctor_var_reset(Vlng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlng___024root___ctor_var_reset\n"); );
    Vlng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->clk_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18269620623500824766ull);
    vlSelf->In1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17805902084973496985ull);
    vlSelf->In2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13882082875050741861ull);
    vlSelf->ce_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653849638454276296ull);
    vlSelf->Out2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7843701771848176416ull);
    vlSelf->Out1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18027761842025144338ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__dataInreg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10199903773831516994ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__validInreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16941431884353241798ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__intdelay_reg = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1187369381799141277ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re1 = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2107145091882803767ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re1 = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 3702219524582717411ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re2 = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 14866643058196262329ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re2 = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 11554137931919714279ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__addOut_re3 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13736750010041122293ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_iSection__DOT__iOutreg_re3 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1965464403173614322ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17353823263172701369ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10659814291998514181ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4307962830870993705ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_count_next = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 652900257101289105ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_dataOutReg_re_next = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14013314203700039147ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_dsSection__DOT__downSampler_validOutReg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12895890264175395517ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4616618536169869705ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10108774759330930829ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_vout3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17864640444831573829ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8193802407158821534ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15304999983333506331ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re2 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9605774653471929330ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re2 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4631964971125191627ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cDelay_re3 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11126241115538968082ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__cBuff_re3 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8029555249302327072ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__combOut_re_1 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8567308573342753660ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_cSection__DOT__c_vout_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 816739422389963640ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__bRShift_re = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 14947999745952754348ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg2_re = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7083485608560503190ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainOutareg1_re = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 6731398009013086884ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__gainCorrection_gainDatareg1_re = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17353777132710318512ull);
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__mulOut_re = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15996631935601114206ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 8530462382147381204ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 13994094244183652658ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8086120182260932173ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT__intdelay_reg_next_1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10383400663822267872ull);
    }
    vlSelf->DECIMATOR__DOT__u_CIC_Decimator_inst__DOT__u_gcSection__DOT____Vlvbound_h029fb560__0 = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15219238944966155408ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinRegVld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18377349882064404221ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg_0_re = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11112490553435320274ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2_0_re = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4239815032832585827ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__dinReg2Vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15890690048182495773ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__intdelay_reg = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2103695300411530341ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__vldOutTmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17439518473394716762ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dinPreAdd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11909743342055155413ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__dout_1_re_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15516836463040822848ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__doutVld_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1857813603667144487ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11854184771764044710ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9290237039861450592ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 29062338990485752ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17787827719066073057ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6559140852466590740ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14369216410033874495ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7959184346186455874ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13241077765425668031ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7703469271700380044ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14677718834286102258ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8760088630488077926ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6267433066235969106ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12902220206192596249ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 200575134668857835ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 433607430698690855ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_1__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11282559532934013191ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6673806746851979584ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10691614809343303157ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4190578121994899967ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3558220668445823050ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13411673860578115793ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 7830151207508403279ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3394071404658368612ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4885968465584428687ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13949681541247310541ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11914870983040685877ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7088504214510642348ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8896691601377315394ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3042692162514496597ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3594248893429381372ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4449453557093127884ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_2__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11680972553179392405ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3390725391972976369ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3857008634969460863ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1207154751123930294ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6201479573461754963ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13522602671289639829ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 6444490713324655022ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15496379198579176448ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5608379653530422242ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7336522217994224695ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16311741022028124531ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8232815399730892680ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13531873211834068593ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15859403550594661581ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2328311261311370241ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2688180970528016172ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_3__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1998469885892014018ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11857518778283779002ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2328798010043866861ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3285605201612214722ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7384267936011813616ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6520036197113981077ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11344319881681057602ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17324304418831113236ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9621581943363563254ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6752625679714976148ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7451895381460516964ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16219072576388700106ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5654176682230127372ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16682081455953429820ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4327369188664262959ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5672084578072285862ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_4__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12205167021713376501ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3033310160532372545ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 51062708004574114ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13820360835121592412ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1470821726870068088ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11592057392884663421ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12753225239970164425ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8926357208492036868ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11209888865121796572ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11513527004040851016ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3777960631413705762ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4177618733467568439ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17529442555758141965ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15498499871767027499ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 6578815837578129275ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 354708585340189873ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_5__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11291026658690204089ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16746477966509097383ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8744375675307158261ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5845187224720135450ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7104864428323861522ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14140711853826440450ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 1192969380797319742ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15902923763840119462ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16114724281864394254ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 18393197698946076445ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5343354809525265892ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8630402001996339781ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9679354070098306945ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14769540064847089655ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12886606200508000030ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3408726250722967841ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_6__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16978377534445172646ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3991776252100064745ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16627579377698497457ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 737873641382742201ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3771662529086682121ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11742135223525768196ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2453946825130292739ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16976366622991326630ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2537334907814803677ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_mult_reg_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8969255553562596713ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1214758838266374067ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din1_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4718366579152955391ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_din2_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4542478387772691123ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_preAdd_reg_next = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3671065631281663293ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_addout_reg_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 17701227624638723117ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg1_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14880476586689221576ull);
    vlSelf->DECIMATOR__DOT__u_DCF__DOT__u_FilterBank__DOT__u_subFilter_1_re__DOT__u_FilterTap_7__DOT__fTap_coef_reg2_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5675046302472925266ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__vldAndRdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18265789613009527804ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__delayLine = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6998224492755130967ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__delayLine_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1574675082190676078ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2844769915633317376ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__validOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13713549910490650180ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13267701295010987800ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225682845091440671ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10053490007647563838ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4155060701699647282ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8475074063235469964ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2434305611644696785ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971641940737766073ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2310285155570811226ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18381191289042135446ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14672758916493286200ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17625977165749473555ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12264662325098291286ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3879913693349383419ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11322938650145624462ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14147773460615992222ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3018414257235452222ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6979004832327838222ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12388744061957303575ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2145614132096726310ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4592513974758180765ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636349787845322567ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 951545590748462779ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11418891268734732567ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13789694272990187400ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17157190849727560422ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8323723545686069601ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11284257656838040017ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12362207818016415902ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6032873770765636760ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14887567604812090221ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17651482005726989592ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3354960639722013318ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1050522761803204120ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12941553315464307483ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14066607450266383965ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8696931261852138014ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10662620689431092037ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10472979914338102828ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11023861101168387274ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 785518323805782730ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP0_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14629083142834978164ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg0_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17747672997419456892ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10716702143519877272ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10571986674006801567ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__accAdderOut = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6512303958303604823ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3989172815206325220ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11881239504045992237ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3467794303631742222ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2437493933565685670ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6509891602667106314ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248834290408420285ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9194790132399238924ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13510491362422045820ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15549106992932654851ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5144611429808326325ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17236719288413598201ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 70624257336354285ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16999056720951319032ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 103382088675190246ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3507772834080701124ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2681650304281468086ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4663244071108202100ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11282058634796801717ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2046007114816096440ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6555514963248122265ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7029896137716362268ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12706678905067708866ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9244419389120239988ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14245939085566417011ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12388707322454252380ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16724244567092321422ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4646339340509378231ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8653313509079416764ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8109911692730902931ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4736683338233678544ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2663944072420437189ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14494892471133281811ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16664624194652624645ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16567342923162272259ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 4160059438167199979ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8083027583951899747ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 654079171204363011ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap0__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3089825759074260748ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6447656916530219312ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11356111045951938909ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7126080811744505321ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13360888924680599694ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15959951614075946331ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8628436682309131456ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10070463996614825533ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7450695527287232565ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3340614806520269056ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5360618636431531383ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12240668591511284860ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5586537901631679060ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17098732300083598065ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15024757724826788842ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10135861898050251325ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6647641586032556786ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12101596810284463986ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12148531915871293963ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7111558662920989006ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12803657478416708430ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16143162061008112203ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3025604831352261474ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9681701371911867910ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15825952734195537454ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7820911933191479334ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7888401238604854240ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8638947197451128133ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7602593916235887591ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7193213344014472833ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7837463180433411032ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1147818718936694584ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3453778098500282119ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13173201375255653911ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16028604612982632186ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254743066141127704ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9015211244993976137ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 829192738500804670ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1827486812679693843ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5044994623607804387ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16532412551769049443ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12309602425652968041ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17181826200042191982ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1728977461290893307ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1690928411174298186ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1664565612454562323ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 487930508496183852ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5971971866423130169ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11883412199234810808ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13994228801288757229ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 24174175433279217ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7747754256429788617ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__gainOutDB = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10336806250733101667ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11317985151564481253ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7309028324707429332ull);
    }
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 379378455353309078ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11127843397641761749ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__accAdderOut = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16025299869227856399ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9163851961238640626ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15013507956636968370ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4410067535582884379ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484388304521038970ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6921181424723985344ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4820606412947896101ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16138342120799531373ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10559750010640034945ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8337136954223350107ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15736381546278967537ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18200508849856692594ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2058824963537467255ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3363932546191727403ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6991784846167609808ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11317503305534132521ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4576505657734573215ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accReg_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6924752036276084532ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__accOut_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15594613755517756769ull);
    vlSelf->DECIMATOR__DOT__u_HBF1__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 698972006606295054ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__vldAndRdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822967933848507472ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__delayLine = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8603065588493132131ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__delayLine_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16521677280940128276ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4931494564777353385ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__validOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419934754462936472ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16597456979123905084ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5205434991807312207ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4821794369358129571ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1722573949307754536ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_inputCnt_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15140808686690197531ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7144155652941220293ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_vldOutReg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15680250756259656682ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_partlySerialCtrl__DOT__CtrlLogic_rdyReg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2787044961543276652ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddrReverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5315598785514662651ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCountReverse_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 373506767558504771ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineWrAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11589811480302118352ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__wrCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11127642379281673130ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextDelayLineRdAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12431368650425209839ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9987476454676351516ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__nextSharingCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8308181683550326606ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sharingCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11621121666492180920ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineValidInP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5344241219724369520ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEnP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1060111544259323129ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7908753599975883218ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17949808563331210088ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10477719519386175689ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn4_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8004337291984035215ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3676724837341234272ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8664155333188706690ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineShiftEn7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12177997639703506613ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__validOutLookahead_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15018972011981628037ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__vldOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6858320204252951163ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513693916015934553ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7655799693001924116ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12023272036345793691ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18316760781463893982ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17937378363046473356ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13726224710813904776ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6018601071122148666ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__rdAddr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5940441725566464034ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__finalSumValidPipe_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16602211570380349901ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6701604387823417288ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17871072119929479172ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2820369784824485342ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn4_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14858480029214741056ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn5_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10793709044569679914ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8822487701487545533ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__delayLineDataIn7_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4336752282578997156ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7145409928901694508ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10337784112204458313ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP5_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10778596652123643857ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg5_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16738018582065505087ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP4_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 527044554731256677ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg4_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13213207002994689423ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3739266843689756040ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16907245586694360462ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9487372369742466855ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8671249622336067588ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableRegP1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7417111200602613549ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__coeffTableReg1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10836782365738083846ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOut = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1173177500537119223ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__sumOutReg_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5357772392479327096ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accDataOut_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4385750593488082155ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__accAdderOut = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 106966472971370315ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__dout_re_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8759822487312426539ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__InputControl_out4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 192183304641606000ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10417603369146338643ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3708284727190065121ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12445226370340884587ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__firRdy_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14826718058078298944ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinSM_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7286550900963882445ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_firRdyLogic__DOT__dinVldSM_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9264565937304463443ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15556555918013826355ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine0__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5168030873711607382ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11192214882003703992ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 63320674816934184ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine1__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11861365566660065501ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12941597988255075474ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17287924777525153547ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine2__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13745724055321295160ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6875316330324183253ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8877462794515278059ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine3__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4393410603812921839ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8975508134878597437ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8386247707615122961ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine4__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2409228167122446099ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16634858544356815100ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 150897645817042057ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine5__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 253364472744675599ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18372348959108631764ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine6__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16478020802918771315ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10718300143495791436ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine7__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5106887874322385308ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17681215240138990803ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15210886427697739583ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine8__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 219632981642043224ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 204052670459578984ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6467207314755257285ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine9__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17032684606712101085ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11966213354004451982ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 422626178656900270ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine10__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3793019011341768353ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2583954905549193799ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2293678178313593425ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine11__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2939628682332889489ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17201433891397767849ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14752653649734065477ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_delayLine12__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15822221593601387409ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 18318103082977411824ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3606752446845109596ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1908262588314168483ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15727113247950752840ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 454402802598898422ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7440133976514629486ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10375575913417399176ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap1__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9282166273848836969ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11150059485137525344ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8219682976489411091ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11744587321083064462ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4978290576037580356ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6736431494520207395ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9612336576854400777ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7529058788112853518ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap2__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 899993374720318903ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14601915853994268069ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12566901726918786678ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15548170662545605416ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 790860851209812092ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 1614418935825541715ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4302832401040112017ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6506169621481375095ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap3__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12211600869055334244ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13073573824784820031ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17800709676424011889ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8709328199365058346ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13636001451575372408ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13996636518178140213ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7767443740628925077ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17668941559354676323ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap4__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8029777695234462695ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4201511653482663594ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10957163224737940734ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7755718295887647742ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17727075866284476063ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 140286436192419074ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1497389965202542319ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10545852528813583610ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap5__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5345096243726427971ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7851944334322612755ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din1_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17102282396451551ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_din2_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14920675515894982090ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_preAdd_reg = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1008845066726895241ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_mult_reg = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 13761386406118116521ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_addout_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16774750024522130901ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8797804144747330328ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_1__DOT__u_filterTap6__DOT__fTap_coef_reg2 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4780003562291677457ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddrReverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4719402496606736897ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCountReverse_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254342667841756444ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineWrAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9975606717828653125ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__wrCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14177457952910698390ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextDelayLineRdAddr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2660661768811971342ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3220189821390403241ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__nextSharingCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14233880892154549539ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sharingCount_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8249646551877825446ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineValidInP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4955343835224187531ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEnP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1816801100665779430ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15668779099153165980ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 378742389564250158ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2527212904539664069ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn4_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 90307678229180148ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7942226085566275289ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073730727154102214ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineShiftEn7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16925649134491238293ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__validOutLookahead_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18428769935100692599ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__vldOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11208694379621851463ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5959013287856894484ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1594789368191191842ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626232694667259954ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5848798364821102125ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6482671190745829387ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11596808811819472248ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440128079737499825ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__rdAddr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3107521627101544434ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__finalSumValidPipe_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9034163428005187745ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableRegP6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12341961906906462046ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__coeffTableReg6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15945560608995596986ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn1_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3097912287157038148ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn2_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5553320537877631157ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn3_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8394707373077660368ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn4_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 56858811216534217ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn5_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7259356590476858249ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__delayLineDataIn6_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10191601380548996541ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__gainOutDB = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1519543782886545378ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 501429323908927725ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__filterDelay_reg_next[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12077638351218340518ull);
    }
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__sumOutReg_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4104343266829471868ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accDataOut_1 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1224598872649209740ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__accAdderOut = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 701471843274124603ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__dout_re_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11713037475787151820ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__InputControl_out4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17121790512869121287ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6741703717804148526ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15663693589388015231ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7238141180489133642ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__firRdy_count_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5142747250411705018ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinSM_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10505192171530034593ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_firRdyLogic__DOT__dinVldSM_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3368979517145061137ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17035783966901454135ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine0__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11621706024665869263ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2521308353072896542ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine1__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17546082229385657183ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3579971790384911900ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine2__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12580327865187688600ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13139837943264712550ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine3__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9009850970192087229ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11010232124098950178ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine4__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 739505831662749555ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14970206793131413005ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine5__DOT__delayedSignals1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15982250607888735442ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__delayedSignals0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11016547658771969514ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FIRDecim_phase_2__DOT__u_delayLine6__DOT__dataOut_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 895543112460982030ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accReg_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15986214864496325122ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__accOut_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3127966459990233925ull);
    vlSelf->DECIMATOR__DOT__u_HBF2__DOT__u_FirDecimAccum_2__DOT__intdelay_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10266782987830927566ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
}
