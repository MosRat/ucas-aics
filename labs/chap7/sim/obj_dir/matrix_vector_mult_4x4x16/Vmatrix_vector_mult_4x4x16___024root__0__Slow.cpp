// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmatrix_vector_mult_4x4x16.h for the primary calling header

#include "Vmatrix_vector_mult_4x4x16__pch.h"

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_static(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_static\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_initial(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_initial\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_final(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_final\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmatrix_vector_mult_4x4x16___024root___eval_phase__stl(Vmatrix_vector_mult_4x4x16___024root* vlSelf);

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_settle(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_settle\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmatrix_vector_mult_4x4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../src/../src/matrix_vector_mult_4x4x16.v", 11, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vmatrix_vector_mult_4x4x16___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_triggers__stl(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__stl\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmatrix_vector_mult_4x4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___stl_sequent__TOP__0(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.results[0U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result;
    vlSelfRef.results[1U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result;
    vlSelfRef.results[2U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result;
    vlSelfRef.results[3U] = vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result;
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
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[0U] 
        = vlSelfRef.results[0U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[1U] 
        = vlSelfRef.results[1U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[2U] 
        = vlSelfRef.results[2U];
    vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[3U] 
        = vlSelfRef.results[3U];
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root____Vm_traceActivitySetAll(Vmatrix_vector_mult_4x4x16___024root* vlSelf);

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___eval_stl(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_stl\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmatrix_vector_mult_4x4x16___024root___stl_sequent__TOP__0(vlSelf);
        Vmatrix_vector_mult_4x4x16___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vmatrix_vector_mult_4x4x16___024root___eval_phase__stl(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___eval_phase__stl\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmatrix_vector_mult_4x4x16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmatrix_vector_mult_4x4x16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmatrix_vector_mult_4x4x16___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root____Vm_traceActivitySetAll(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root____Vm_traceActivitySetAll\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root___ctor_var_reset(Vmatrix_vector_mult_4x4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root___ctor_var_reset\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6542572508991056686ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15258019614976312503ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14980145524002492722ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9536442774402469825ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_vector_mult_4x4x16__DOT__weights[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2952405292645331282ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__results[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10351729582083229938ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__weight_col0[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9669141180628829337ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__weight_col1[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11483511596448079937ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__weight_col2[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7530668504451498458ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__weight_col3[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1043781466413523434ull);
    }
    vlSelf->matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result = 0;
    vlSelf->matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result = 0;
    vlSelf->matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result = 0;
    vlSelf->matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 171571767586946047ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4482471463412771440ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17764363119136964408ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3490805128366992716ull);
    }
    vlSelf->matrix_vector_mult_4x4x16__DOT__ipu0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17617651824572858418ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1660205520621394368ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8927701012269415532ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6980822542301596832ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2903403896623903651ull);
    }
    vlSelf->matrix_vector_mult_4x4x16__DOT__ipu1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2764473673639918743ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12762580470364837195ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13586897363196826669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16216039485439600244ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2589554918286662375ull);
    }
    vlSelf->matrix_vector_mult_4x4x16__DOT__ipu2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7528244385063935478ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15566511655874406578ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11601836646316666893ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8352216724312822131ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8593497672552043626ull);
    }
    vlSelf->matrix_vector_mult_4x4x16__DOT__ipu3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 447271992462893666ull);
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
