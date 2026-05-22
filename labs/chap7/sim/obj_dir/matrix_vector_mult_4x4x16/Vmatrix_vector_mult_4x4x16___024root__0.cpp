// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmatrix_vector_mult_4x4x16.h for the primary calling header

#include "Vmatrix_vector_mult_4x4x16__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vmatrix_vector_mult_4x4x16___024root___eval_triggers__ico(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__ico\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmatrix_vector_mult_4x4x16___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__ico\n"); );
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

void Vmatrix_vector_mult_4x4x16___024root___ico_sequent__TOP__0(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___ico_sequent__TOP__0\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[0U][0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[0U][1U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[0U][2U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[0U][3U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[1U][0U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[1U][1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[1U][2U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[1U][3U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[2U][0U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[2U][1U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[2U][2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[2U][3U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[3U][0U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[3U][1U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[3U][2U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights[3U][3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[0U] 
        = vlSelfRef.weights[0U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[1U] 
        = vlSelfRef.weights[1U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[2U] 
        = vlSelfRef.weights[2U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[3U] 
        = vlSelfRef.weights[3U][0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[0U] 
        = vlSelfRef.weights[0U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[1U] 
        = vlSelfRef.weights[1U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[2U] 
        = vlSelfRef.weights[2U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[3U] 
        = vlSelfRef.weights[3U][1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[0U] 
        = vlSelfRef.weights[0U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[1U] 
        = vlSelfRef.weights[1U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[2U] 
        = vlSelfRef.weights[2U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[3U] 
        = vlSelfRef.weights[3U][2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[0U] 
        = vlSelfRef.weights[0U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[1U] 
        = vlSelfRef.weights[1U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[2U] 
        = vlSelfRef.weights[2U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[3U] 
        = vlSelfRef.weights[3U][3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[0U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
        [0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[1U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
        [1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[2U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
        [2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[3U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
        [3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[0U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
        [0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[1U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
        [1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[2U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
        [2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[3U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
        [3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[0U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
        [0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[1U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
        [1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[2U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
        [2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[3U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
        [3U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[0U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
        [0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[1U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
        [1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[2U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
        [2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[3U] 
        = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
        [3U];
}

void Vmatrix_vector_mult_4x4x16___024root___eval_ico(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_ico\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmatrix_vector_mult_4x4x16___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vmatrix_vector_mult_4x4x16___024root___eval_phase__ico(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_phase__ico\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmatrix_vector_mult_4x4x16___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vmatrix_vector_mult_4x4x16___024root___eval_triggers__act(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__act\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__act\n"); );
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

void Vmatrix_vector_mult_4x4x16___024root___nba_sequent__TOP__0(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___nba_sequent__TOP__0\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v0;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v5;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v6;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v7;
    __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v7 = 0;
    // Body
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v0 = 0U;
    __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__i = 4U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v0 = 1U;
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v0 = 1U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__i = 4U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__i = 4U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4 
            = vlSelfRef.activations[0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v5 
            = vlSelfRef.activations[1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v6 
            = vlSelfRef.activations[2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v7 
            = vlSelfRef.activations[3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4 
            = vlSelfRef.activations[0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v5 
            = vlSelfRef.activations[1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v6 
            = vlSelfRef.activations[2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v7 
            = vlSelfRef.activations[3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4 
            = vlSelfRef.activations[0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v5 
            = vlSelfRef.activations[1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v6 
            = vlSelfRef.activations[2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v7 
            = vlSelfRef.activations[3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4 
            = vlSelfRef.activations[0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v5 
            = vlSelfRef.activations[1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v6 
            = vlSelfRef.activations[2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v7 
            = vlSelfRef.activations[3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
            [0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v5 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
            [1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v6 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
            [2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v7 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0
            [3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
            [0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v5 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
            [1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v6 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
            [2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v7 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1
            [3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
            [0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v5 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
            [1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v6 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
            [2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v7 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2
            [3U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
            [0U];
        __VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4 = 1U;
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v5 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
            [1U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v6 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
            [2U];
        __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v7 
            = vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3
            [3U];
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result 
            = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                             [0U]), 
                           VL_EXTENDS_II(32,16, vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                         [0U])) + (
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                                             [1U])) 
                                                   + 
                                                   (VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                                              [2U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                                              [2U])) 
                                                    + 
                                                    VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                                              [3U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                                              [3U])))));
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result 
            = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                             [0U]), 
                           VL_EXTENDS_II(32,16, vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                         [0U])) + (
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                                             [1U])) 
                                                   + 
                                                   (VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                                              [2U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                                              [2U])) 
                                                    + 
                                                    VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                                              [3U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                                              [3U])))));
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result 
            = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                             [0U]), 
                           VL_EXTENDS_II(32,16, vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                         [0U])) + (
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                                             [1U])) 
                                                   + 
                                                   (VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                              [2U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                                              [2U])) 
                                                    + 
                                                    VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                              [3U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                                              [3U])))));
        vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result 
            = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                             [0U]), 
                           VL_EXTENDS_II(32,16, vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                         [0U])) + (
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,16, 
                                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                                             [1U])) 
                                                   + 
                                                   (VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                              [2U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                                              [2U])) 
                                                    + 
                                                    VL_MULS_III(32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                              [3U]), 
                                                                VL_EXTENDS_II(32,16, 
                                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                                              [3U])))));
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg__v7;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v0) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[0U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[1U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[2U] = 0U;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[3U] = 0U;
    }
    if (__VdlySet__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4) {
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[0U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v4;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[1U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v5;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[2U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v6;
        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[3U] 
            = __VdlyVal__matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg__v7;
    }
    vlSelfRef.results[0U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result;
    vlSelfRef.results[1U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result;
    vlSelfRef.results[2U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result;
    vlSelfRef.results[3U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result;
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[0U] 
        = vlSelfRef.results[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[1U] 
        = vlSelfRef.results[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[2U] 
        = vlSelfRef.results[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[3U] 
        = vlSelfRef.results[3U];
}

void Vmatrix_vector_mult_4x4x16___024root___eval_nba(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_nba\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmatrix_vector_mult_4x4x16___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vmatrix_vector_mult_4x4x16___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmatrix_vector_mult_4x4x16___024root___eval_phase__act(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_phase__act\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__act(vlSelf);
    Vmatrix_vector_mult_4x4x16___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmatrix_vector_mult_4x4x16___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmatrix_vector_mult_4x4x16___024root___eval_phase__nba(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_phase__nba\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmatrix_vector_mult_4x4x16___024root___eval_nba(vlSelf);
        Vmatrix_vector_mult_4x4x16___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmatrix_vector_mult_4x4x16___024root___eval(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmatrix_vector_mult_4x4x16___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../src/../src/matrix_vector_mult_4x4x16.v", 11, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vmatrix_vector_mult_4x4x16___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../src/../src/matrix_vector_mult_4x4x16.v", 11, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../src/../src/matrix_vector_mult_4x4x16.v", 11, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vmatrix_vector_mult_4x4x16___024root___eval_phase__act(vlSelf));
    } while (Vmatrix_vector_mult_4x4x16___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vmatrix_vector_mult_4x4x16___024root___eval_debug_assertions(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_debug_assertions\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");
    }
}
#endif  // VL_DEBUG
