// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vinner_product_4x16__Syms.h"


VL_ATTR_COLD void Vinner_product_4x16___024root__trace_init_sub__TOP__0(Vinner_product_4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_init_sub__TOP__0\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("inner_product_4x16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+17,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_init_top(Vinner_product_4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_init_top\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinner_product_4x16___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vinner_product_4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinner_product_4x16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinner_product_4x16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_register(Vinner_product_4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_register\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vinner_product_4x16___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vinner_product_4x16___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vinner_product_4x16___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vinner_product_4x16___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_const_0\n"); );
    // Body
    Vinner_product_4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_product_4x16___024root*>(voidSelf);
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_full_0_sub_0(Vinner_product_4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_full_0\n"); );
    // Body
    Vinner_product_4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_product_4x16___024root*>(voidSelf);
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vinner_product_4x16___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinner_product_4x16___024root__trace_full_0_sub_0(Vinner_product_4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_product_4x16___024root__trace_full_0_sub_0\n"); );
    Vinner_product_4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+1,(vlSelfRef.inner_product_4x16__DOT__activations[0]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.inner_product_4x16__DOT__activations[1]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.inner_product_4x16__DOT__activations[2]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.inner_product_4x16__DOT__activations[3]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.inner_product_4x16__DOT__weights[0]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.inner_product_4x16__DOT__weights[1]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.inner_product_4x16__DOT__weights[2]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.inner_product_4x16__DOT__weights[3]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.inner_product_4x16__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.inner_product_4x16__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.inner_product_4x16__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.inner_product_4x16__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.inner_product_4x16__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.inner_product_4x16__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.inner_product_4x16__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.inner_product_4x16__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+17,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
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
                                 + (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
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
                                                                [3U])))))),32);
    bufp->fullIData(oldp+18,(vlSelfRef.inner_product_4x16__DOT__i),32);
    bufp->fullBit(oldp+19,(vlSelfRef.clk));
    bufp->fullBit(oldp+20,(vlSelfRef.reset));
    bufp->fullBit(oldp+21,(vlSelfRef.enable));
    bufp->fullSData(oldp+22,(vlSelfRef.activations[0]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.activations[1]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.activations[2]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.activations[3]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.weights[0]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.weights[1]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.weights[2]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.weights[3]),16);
    bufp->fullIData(oldp+30,(vlSelfRef.result),32);
}
