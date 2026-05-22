// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmatrix_mult_4x4x4x16.h for the primary calling header

#include "Vmatrix_mult_4x4x4x16__pch.h"

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_static(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_static\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_initial(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_initial\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_final(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_final\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmatrix_mult_4x4x4x16___024root___eval_phase__stl(Vmatrix_mult_4x4x4x16___024root* vlSelf);

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_settle(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_settle\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmatrix_mult_4x4x4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../src/../src/matrix_mult_4x4x4x16.v", 9, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vmatrix_mult_4x4x4x16___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_triggers__stl(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_triggers__stl\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmatrix_mult_4x4x4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vmatrix_mult_4x4x4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_mult_4x4x4x16___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmatrix_mult_4x4x4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___stl_sequent__TOP__0(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___stl_sequent__TOP__0\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[0U][0U] 
        = vlSelfRef.activations[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[0U][1U] 
        = vlSelfRef.activations[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[0U][2U] 
        = vlSelfRef.activations[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[0U][3U] 
        = vlSelfRef.activations[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[1U][0U] 
        = vlSelfRef.activations[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[1U][1U] 
        = vlSelfRef.activations[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[1U][2U] 
        = vlSelfRef.activations[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[1U][3U] 
        = vlSelfRef.activations[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[2U][0U] 
        = vlSelfRef.activations[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[2U][1U] 
        = vlSelfRef.activations[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[2U][2U] 
        = vlSelfRef.activations[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[2U][3U] 
        = vlSelfRef.activations[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[3U][0U] 
        = vlSelfRef.activations[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[3U][1U] 
        = vlSelfRef.activations[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[3U][2U] 
        = vlSelfRef.activations[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__activations[3U][3U] 
        = vlSelfRef.activations[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[1U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[2U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[3U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[0U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[2U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[3U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[0U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[1U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[3U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[0U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[1U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[2U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[1U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[2U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[3U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[0U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[2U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[3U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[0U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[1U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[3U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[0U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[1U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[2U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[1U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[2U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[3U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[0U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[2U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[3U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[0U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[1U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[3U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[0U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[1U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[2U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[1U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[2U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[3U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[0U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[2U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[3U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[0U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[1U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[3U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[0U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[1U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[2U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations[0U] 
        = vlSelfRef.activations[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations[1U] 
        = vlSelfRef.activations[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations[2U] 
        = vlSelfRef.activations[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations[3U] 
        = vlSelfRef.activations[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations[0U] 
        = vlSelfRef.activations[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations[1U] 
        = vlSelfRef.activations[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations[2U] 
        = vlSelfRef.activations[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations[3U] 
        = vlSelfRef.activations[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations[0U] 
        = vlSelfRef.activations[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations[1U] 
        = vlSelfRef.activations[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations[2U] 
        = vlSelfRef.activations[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations[3U] 
        = vlSelfRef.activations[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations[0U] 
        = vlSelfRef.activations[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations[1U] 
        = vlSelfRef.activations[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations[2U] 
        = vlSelfRef.activations[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations[3U] 
        = vlSelfRef.activations[3U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu0__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu1__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu2__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu3__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu0__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu1__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu2__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu3__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu0__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu1__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu2__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu3__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu0__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu1__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu2__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu3__result;
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [3U];
    vlSelfRef.results[0U][0U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [0U];
    vlSelfRef.results[0U][1U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [1U];
    vlSelfRef.results[0U][2U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [2U];
    vlSelfRef.results[0U][3U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [3U];
    vlSelfRef.results[1U][0U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [0U];
    vlSelfRef.results[1U][1U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [1U];
    vlSelfRef.results[1U][2U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [2U];
    vlSelfRef.results[1U][3U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [3U];
    vlSelfRef.results[2U][0U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [0U];
    vlSelfRef.results[2U][1U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [1U];
    vlSelfRef.results[2U][2U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [2U];
    vlSelfRef.results[2U][3U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[0U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[1U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[2U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[3U] 
        = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [3U];
    vlSelfRef.results[3U][0U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [0U];
    vlSelfRef.results[3U][1U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [1U];
    vlSelfRef.results[3U][2U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [2U];
    vlSelfRef.results[3U][3U] = vlSelfRef.matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results
        [3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[0U][0U] 
        = vlSelfRef.results[0U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[0U][1U] 
        = vlSelfRef.results[0U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[0U][2U] 
        = vlSelfRef.results[0U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[0U][3U] 
        = vlSelfRef.results[0U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[1U][0U] 
        = vlSelfRef.results[1U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[1U][1U] 
        = vlSelfRef.results[1U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[1U][2U] 
        = vlSelfRef.results[1U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[1U][3U] 
        = vlSelfRef.results[1U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[2U][0U] 
        = vlSelfRef.results[2U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[2U][1U] 
        = vlSelfRef.results[2U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[2U][2U] 
        = vlSelfRef.results[2U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[2U][3U] 
        = vlSelfRef.results[2U][3U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[3U][0U] 
        = vlSelfRef.results[3U][0U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[3U][1U] 
        = vlSelfRef.results[3U][1U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[3U][2U] 
        = vlSelfRef.results[3U][2U];
    vlSelfRef.matrix_mult_4x4x4x16__DOT__results[3U][3U] 
        = vlSelfRef.results[3U][3U];
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root____Vm_traceActivitySetAll(Vmatrix_mult_4x4x4x16___024root* vlSelf);

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___eval_stl(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_stl\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmatrix_mult_4x4x4x16___024root___stl_sequent__TOP__0(vlSelf);
        Vmatrix_mult_4x4x4x16___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vmatrix_mult_4x4x4x16___024root___eval_phase__stl(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___eval_phase__stl\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmatrix_mult_4x4x4x16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vmatrix_mult_4x4x4x16___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmatrix_mult_4x4x4x16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmatrix_mult_4x4x4x16___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_mult_4x4x4x16___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmatrix_mult_4x4x4x16___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_mult_4x4x4x16___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root____Vm_traceActivitySetAll(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root____Vm_traceActivitySetAll\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root___ctor_var_reset(Vmatrix_mult_4x4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root___ctor_var_reset\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->activations[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6542572508991056686ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15258019614976312503ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->results[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14980145524002492722ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__activations[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3265141302422202583ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12417610298321886434ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__results[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15534669901515239988ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellout__mxv0__results[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellinp__mxv0__activations[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellout__mxv1__results[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellinp__mxv1__activations[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellout__mxv2__results[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellinp__mxv2__activations[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellout__mxv3__results[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT____Vcellinp__mxv3__activations[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8130111871265553960ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7183544986736921683ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 822787700106653696ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12806543342237881109ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4172843644958220043ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5959147932553657768ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2524035634103541580ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu0__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu1__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu2__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu3__result = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12920277684570766112ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14774063916679601873ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13444003018303323784ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12724163325991207904ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2163143358063321448ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8386650799576627944ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 236742815657758642ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3473205454520814527ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16212882249384355419ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 396379194683714194ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10073337378482486743ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2104556038398555317ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16050776575527129886ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15143059426396970720ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15462291628999598938ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18044281228629451188ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6566577926029017990ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1365228145035805689ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15555834938385668786ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2321150707158123061ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4294253529800250453ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6794943569140550526ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8565399731339266490ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5330897665416101672ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13654846317823799858ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9551845527541400667ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16030964440354517208ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu0__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu1__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu2__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu3__result = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15883535259520482417ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15414398205290797917ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18004312757814053982ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13571398036349766925ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9673473858553553371ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3156236811772573716ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15031337118473125295ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7232683208840830616ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16122836983459556443ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8705987600942178047ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10536981614645245286ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10707804034384780324ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1510679198501605070ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5280346016545089266ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4160262310923394133ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13083072443771375512ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3519804129597348531ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3256001722052738692ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12194214143423342075ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6780821013959783468ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9044852302222223638ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13438146494288234279ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14128415143695042892ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5358671700745865539ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3097326718198077315ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7699993235048244391ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13210590108083018374ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu0__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu1__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu2__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu3__result = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7639287723655739249ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14566658754411732717ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17015167736158084669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6764972764299393993ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13010217146608535614ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16564881655075237847ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4885520410611375182ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9183544762527775504ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5367867924041707642ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9551105665182072208ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7033437379371075088ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18090453236107341175ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 224546584523842271ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16508861046073101308ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4677913418560510784ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16312634665519872843ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4844239744489039760ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3962031561934577959ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8988619452100131775ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16879514256510428114ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14390862083282187388ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12610646146647853271ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10379986751427710722ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5999557717438061279ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8485096607408023820ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10228138938570028913ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6781370945588089982ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu0__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu1__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu2__result = 0;
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu3__result = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3850710017312055968ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4749399682520480505ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14060392191151564813ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17524482541601897664ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4414935801531594114ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2295623671094758030ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9148526059926933039ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4343872576665449234ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9208646233177050403ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18321133612989358028ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5987040072485957584ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10338646708110662843ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5796720461187086564ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4261941367197608486ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3373566998396742749ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3547256099185134382ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8816954339456418785ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12439866413683396394ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1491702861109433189ull);
    }
    vlSelf->matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8418422434483829813ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
