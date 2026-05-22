// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_product_4x16.h for the primary calling header

#include "Vinner_product_4x16__pch.h"

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_static(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_static\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_initial(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_initial\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_final(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_final\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinner_product_4x16___024root___eval_phase__stl(Vinner_product_4x16___024root* vlSelf);

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_settle(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_settle\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vinner_product_4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../src/../src/inner_product_4x16.v", 10, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vinner_product_4x16___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_triggers__stl(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_triggers__stl\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinner_product_4x16___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vinner_product_4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vinner_product_4x16___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vinner_product_4x16___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___trigger_anySet__stl\n"); );
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

void Vinner_product_4x16___024root___ico_sequent__TOP__0(Vinner_product_4x16___024root* vlSelf);
VL_ATTR_COLD void Vinner_product_4x16___024root____Vm_traceActivitySetAll(Vinner_product_4x16___024root* vlSelf);

VL_ATTR_COLD void Vinner_product_4x16___024root___eval_stl(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_stl\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vinner_product_4x16___024root___ico_sequent__TOP__0(vlSelf);
        Vinner_product_4x16___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vinner_product_4x16___024root___eval_phase__stl(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_phase__stl\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinner_product_4x16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vinner_product_4x16___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vinner_product_4x16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vinner_product_4x16___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vinner_product_4x16___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vinner_product_4x16___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vinner_product_4x16___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinner_product_4x16___024root____Vm_traceActivitySetAll(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root____Vm_traceActivitySetAll\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vinner_product_4x16___024root___ctor_var_reset(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___ctor_var_reset\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15258019614976312503ull);
    }
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->inner_product_4x16__DOT__activations[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5590577096993315981ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->inner_product_4x16__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12520699300043953520ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->inner_product_4x16__DOT__activations_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17711008896833905597ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->inner_product_4x16__DOT__weights_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16812409583160745726ull);
    }
    vlSelf->inner_product_4x16__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18142583155710557556ull);
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
