// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_product_4x16.h for the primary calling header

#include "Vinner_product_4x16__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vinner_product_4x16___024root___eval_triggers__ico(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_triggers__ico\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinner_product_4x16___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vinner_product_4x16___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___trigger_anySet__ico\n"); );
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

void Vinner_product_4x16___024root___ico_sequent__TOP__0(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___ico_sequent__TOP__0\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.inner_product_4x16__DOT__activations[0U] 
        = vlSelfRef.activations[0U];
    vlSelfRef.inner_product_4x16__DOT__activations[1U] 
        = vlSelfRef.activations[1U];
    vlSelfRef.inner_product_4x16__DOT__activations[2U] 
        = vlSelfRef.activations[2U];
    vlSelfRef.inner_product_4x16__DOT__activations[3U] 
        = vlSelfRef.activations[3U];
    vlSelfRef.inner_product_4x16__DOT__weights[0U] 
        = vlSelfRef.weights[0U];
    vlSelfRef.inner_product_4x16__DOT__weights[1U] 
        = vlSelfRef.weights[1U];
    vlSelfRef.inner_product_4x16__DOT__weights[2U] 
        = vlSelfRef.weights[2U];
    vlSelfRef.inner_product_4x16__DOT__weights[3U] 
        = vlSelfRef.weights[3U];
}

void Vinner_product_4x16___024root___eval_ico(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_ico\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vinner_product_4x16___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vinner_product_4x16___024root___eval_phase__ico(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_phase__ico\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vinner_product_4x16___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vinner_product_4x16___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vinner_product_4x16___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_product_4x16___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vinner_product_4x16___024root___eval_triggers__act(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_triggers__act\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinner_product_4x16___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vinner_product_4x16___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___trigger_anySet__act\n"); );
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

void Vinner_product_4x16___024root___nba_sequent__TOP__0(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___nba_sequent__TOP__0\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__inner_product_4x16__DOT__activations_reg__v0;
    __VdlySet__inner_product_4x16__DOT__activations_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__activations_reg__v4;
    __VdlyVal__inner_product_4x16__DOT__activations_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__inner_product_4x16__DOT__activations_reg__v4;
    __VdlySet__inner_product_4x16__DOT__activations_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__activations_reg__v5;
    __VdlyVal__inner_product_4x16__DOT__activations_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__activations_reg__v6;
    __VdlyVal__inner_product_4x16__DOT__activations_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__activations_reg__v7;
    __VdlyVal__inner_product_4x16__DOT__activations_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__inner_product_4x16__DOT__weights_reg__v0;
    __VdlySet__inner_product_4x16__DOT__weights_reg__v0 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__weights_reg__v4;
    __VdlyVal__inner_product_4x16__DOT__weights_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__inner_product_4x16__DOT__weights_reg__v4;
    __VdlySet__inner_product_4x16__DOT__weights_reg__v4 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__weights_reg__v5;
    __VdlyVal__inner_product_4x16__DOT__weights_reg__v5 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__weights_reg__v6;
    __VdlyVal__inner_product_4x16__DOT__weights_reg__v6 = 0;
    SData/*15:0*/ __VdlyVal__inner_product_4x16__DOT__weights_reg__v7;
    __VdlyVal__inner_product_4x16__DOT__weights_reg__v7 = 0;
    // Body
    __VdlySet__inner_product_4x16__DOT__activations_reg__v0 = 0U;
    __VdlySet__inner_product_4x16__DOT__activations_reg__v4 = 0U;
    __VdlySet__inner_product_4x16__DOT__weights_reg__v0 = 0U;
    __VdlySet__inner_product_4x16__DOT__weights_reg__v4 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.inner_product_4x16__DOT__i = 4U;
        __VdlySet__inner_product_4x16__DOT__activations_reg__v0 = 1U;
        __VdlySet__inner_product_4x16__DOT__weights_reg__v0 = 1U;
        vlSelfRef.result = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.inner_product_4x16__DOT__i = 4U;
        __VdlyVal__inner_product_4x16__DOT__activations_reg__v4 
            = vlSelfRef.activations[0U];
        __VdlySet__inner_product_4x16__DOT__activations_reg__v4 = 1U;
        __VdlyVal__inner_product_4x16__DOT__activations_reg__v5 
            = vlSelfRef.activations[1U];
        __VdlyVal__inner_product_4x16__DOT__activations_reg__v6 
            = vlSelfRef.activations[2U];
        __VdlyVal__inner_product_4x16__DOT__activations_reg__v7 
            = vlSelfRef.activations[3U];
        __VdlyVal__inner_product_4x16__DOT__weights_reg__v4 
            = vlSelfRef.weights[0U];
        __VdlySet__inner_product_4x16__DOT__weights_reg__v4 = 1U;
        __VdlyVal__inner_product_4x16__DOT__weights_reg__v5 
            = vlSelfRef.weights[1U];
        __VdlyVal__inner_product_4x16__DOT__weights_reg__v6 
            = vlSelfRef.weights[2U];
        __VdlyVal__inner_product_4x16__DOT__weights_reg__v7 
            = vlSelfRef.weights[3U];
        vlSelfRef.result = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                          vlSelfRef.inner_product_4x16__DOT__activations_reg
                                                          [0U]), 
                                        VL_EXTENDS_II(32,16, 
                                                      vlSelfRef.inner_product_4x16__DOT__weights_reg
                                                      [0U])) 
                            + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.inner_product_4x16__DOT__activations_reg
                                                             [1U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.inner_product_4x16__DOT__weights_reg
                                                         [1U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.inner_product_4x16__DOT__activations_reg
                                                                [2U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.inner_product_4x16__DOT__weights_reg
                                                            [2U])) 
                                  + VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.inner_product_4x16__DOT__activations_reg
                                                              [3U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.inner_product_4x16__DOT__weights_reg
                                                              [3U])))));
    }
    if (__VdlySet__inner_product_4x16__DOT__activations_reg__v0) {
        vlSelfRef.inner_product_4x16__DOT__activations_reg[0U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[1U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[2U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[3U] = 0U;
    }
    if (__VdlySet__inner_product_4x16__DOT__activations_reg__v4) {
        vlSelfRef.inner_product_4x16__DOT__activations_reg[0U] 
            = __VdlyVal__inner_product_4x16__DOT__activations_reg__v4;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[1U] 
            = __VdlyVal__inner_product_4x16__DOT__activations_reg__v5;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[2U] 
            = __VdlyVal__inner_product_4x16__DOT__activations_reg__v6;
        vlSelfRef.inner_product_4x16__DOT__activations_reg[3U] 
            = __VdlyVal__inner_product_4x16__DOT__activations_reg__v7;
    }
    if (__VdlySet__inner_product_4x16__DOT__weights_reg__v0) {
        vlSelfRef.inner_product_4x16__DOT__weights_reg[0U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[1U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[2U] = 0U;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[3U] = 0U;
    }
    if (__VdlySet__inner_product_4x16__DOT__weights_reg__v4) {
        vlSelfRef.inner_product_4x16__DOT__weights_reg[0U] 
            = __VdlyVal__inner_product_4x16__DOT__weights_reg__v4;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[1U] 
            = __VdlyVal__inner_product_4x16__DOT__weights_reg__v5;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[2U] 
            = __VdlyVal__inner_product_4x16__DOT__weights_reg__v6;
        vlSelfRef.inner_product_4x16__DOT__weights_reg[3U] 
            = __VdlyVal__inner_product_4x16__DOT__weights_reg__v7;
    }
}

void Vinner_product_4x16___024root___eval_nba(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_nba\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vinner_product_4x16___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vinner_product_4x16___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vinner_product_4x16___024root___eval_phase__act(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_phase__act\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinner_product_4x16___024root___eval_triggers__act(vlSelf);
    Vinner_product_4x16___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vinner_product_4x16___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vinner_product_4x16___024root___eval_phase__nba(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_phase__nba\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vinner_product_4x16___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vinner_product_4x16___024root___eval_nba(vlSelf);
        Vinner_product_4x16___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vinner_product_4x16___024root___eval(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vinner_product_4x16___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../src/../src/inner_product_4x16.v", 10, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vinner_product_4x16___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vinner_product_4x16___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../src/../src/inner_product_4x16.v", 10, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vinner_product_4x16___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../src/../src/inner_product_4x16.v", 10, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vinner_product_4x16___024root___eval_phase__act(vlSelf));
    } while (Vinner_product_4x16___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vinner_product_4x16___024root___eval_debug_assertions(Vinner_product_4x16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root___eval_debug_assertions\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
