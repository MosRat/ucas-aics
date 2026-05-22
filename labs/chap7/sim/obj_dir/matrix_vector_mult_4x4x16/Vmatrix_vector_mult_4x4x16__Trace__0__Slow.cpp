// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmatrix_vector_mult_4x4x16__Syms.h"


VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_init_sub__TOP__0(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_init_sub__TOP__0\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+120+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+124,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+126,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+128,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+131,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+132,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+136,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_vector_mult_4x4x16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+13,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+17,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ipu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+73,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+78+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+82,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+84,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+93,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+95,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+96+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+104,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+115,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_init_top(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_init_top\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmatrix_vector_mult_4x4x16___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmatrix_vector_mult_4x4x16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmatrix_vector_mult_4x4x16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_register(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_register\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmatrix_vector_mult_4x4x16___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vmatrix_vector_mult_4x4x16___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vmatrix_vector_mult_4x4x16___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vmatrix_vector_mult_4x4x16___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_const_0\n"); );
    // Body
    Vmatrix_vector_mult_4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_vector_mult_4x4x16___024root*>(voidSelf);
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_full_0_sub_0(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_full_0\n"); );
    // Body
    Vmatrix_vector_mult_4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_vector_mult_4x4x16___024root*>(voidSelf);
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmatrix_vector_mult_4x4x16___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmatrix_vector_mult_4x4x16___024root__trace_full_0_sub_0(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_full_0_sub_0\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+1,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[0]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[1]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[2]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[3]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                            [0U][0U]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                            [0U][1U]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                            [0U][2U]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                            [0U][3U]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                            [1U][0U]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [1U][1U]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [1U][2U]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [1U][3U]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [2U][0U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [2U][1U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [2U][2U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [2U][3U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [3U][0U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [3U][1U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [3U][2U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                             [3U][3U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[0]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[1]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[2]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[3]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[0]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[1]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[2]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[3]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[0]),16);
    bufp->fullSData(oldp+30,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[1]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[2]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[3]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[0]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[1]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[2]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[3]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[0]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[1]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[2]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[3]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[0]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[1]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[2]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[3]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[0]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[1]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[2]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[3]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[0]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[1]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[2]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[3]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[0]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[1]),16);
    bufp->fullSData(oldp+55,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[2]),16);
    bufp->fullSData(oldp+56,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[3]),16);
    bufp->fullSData(oldp+57,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[0]),16);
    bufp->fullSData(oldp+58,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[1]),16);
    bufp->fullSData(oldp+59,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[2]),16);
    bufp->fullSData(oldp+60,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[3]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[0]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[1]),16);
    bufp->fullSData(oldp+63,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[2]),16);
    bufp->fullSData(oldp+64,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[3]),16);
    bufp->fullSData(oldp+65,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[0]),16);
    bufp->fullSData(oldp+66,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[1]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[2]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[3]),16);
    bufp->fullIData(oldp+69,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[0]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[1]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[2]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[3]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result),32);
    bufp->fullSData(oldp+74,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+75,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+76,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+77,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+78,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+79,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+80,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+81,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+82,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                        [0U])) 
                              + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                           [1U])) 
                                 + (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                              [2U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                              [2U])) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                                [3U]), 
                                                  VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                                [3U])))))),32);
    bufp->fullIData(oldp+83,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__i),32);
    bufp->fullIData(oldp+84,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result),32);
    bufp->fullSData(oldp+85,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+86,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+87,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+88,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+89,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+90,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+91,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+92,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+93,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                            [0U]), 
                                          VL_EXTENDS_II(32,16, 
                                                        vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                        [0U])) 
                              + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                               [1U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                           [1U])) 
                                 + (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                              [2U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                              [2U])) 
                                    + VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                                [3U]), 
                                                  VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                                [3U])))))),32);
    bufp->fullIData(oldp+94,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__i),32);
    bufp->fullIData(oldp+95,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result),32);
    bufp->fullSData(oldp+96,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+97,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+98,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+101,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+102,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+103,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+104,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+105,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__i),32);
    bufp->fullIData(oldp+106,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result),32);
    bufp->fullSData(oldp+107,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+108,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+109,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+110,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+111,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+112,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+113,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+114,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+115,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+116,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__i),32);
    bufp->fullBit(oldp+117,(vlSelfRef.clk));
    bufp->fullBit(oldp+118,(vlSelfRef.reset));
    bufp->fullBit(oldp+119,(vlSelfRef.enable));
    bufp->fullSData(oldp+120,(vlSelfRef.activations[0]),16);
    bufp->fullSData(oldp+121,(vlSelfRef.activations[1]),16);
    bufp->fullSData(oldp+122,(vlSelfRef.activations[2]),16);
    bufp->fullSData(oldp+123,(vlSelfRef.activations[3]),16);
    bufp->fullSData(oldp+124,(vlSelfRef.weights[0U]
                              [0U]),16);
    bufp->fullSData(oldp+125,(vlSelfRef.weights[0U]
                              [1U]),16);
    bufp->fullSData(oldp+126,(vlSelfRef.weights[0U]
                              [2U]),16);
    bufp->fullSData(oldp+127,(vlSelfRef.weights[0U]
                              [3U]),16);
    bufp->fullSData(oldp+128,(vlSelfRef.weights[1U]
                              [0U]),16);
    bufp->fullSData(oldp+129,(vlSelfRef.weights[1U]
                              [1U]),16);
    bufp->fullSData(oldp+130,(vlSelfRef.weights[1U]
                              [2U]),16);
    bufp->fullSData(oldp+131,(vlSelfRef.weights[1U]
                              [3U]),16);
    bufp->fullSData(oldp+132,(vlSelfRef.weights[2U]
                              [0U]),16);
    bufp->fullSData(oldp+133,(vlSelfRef.weights[2U]
                              [1U]),16);
    bufp->fullSData(oldp+134,(vlSelfRef.weights[2U]
                              [2U]),16);
    bufp->fullSData(oldp+135,(vlSelfRef.weights[2U]
                              [3U]),16);
    bufp->fullSData(oldp+136,(vlSelfRef.weights[3U]
                              [0U]),16);
    bufp->fullSData(oldp+137,(vlSelfRef.weights[3U]
                              [1U]),16);
    bufp->fullSData(oldp+138,(vlSelfRef.weights[3U]
                              [2U]),16);
    bufp->fullSData(oldp+139,(vlSelfRef.weights[3U]
                              [3U]),16);
    bufp->fullIData(oldp+140,(vlSelfRef.results[0]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.results[1]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.results[2]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.results[3]),32);
}
