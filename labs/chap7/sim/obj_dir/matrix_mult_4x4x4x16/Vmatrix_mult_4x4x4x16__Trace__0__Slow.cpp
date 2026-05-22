// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmatrix_mult_4x4x4x16__Syms.h"


VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_init_sub__TOP__0(Vmatrix_mult_4x4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_init_sub__TOP__0\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+516,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+517,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+518,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+519,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+520,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+521,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+522,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+523,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+524,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+525,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+526,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+527,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+528,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+529,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+530,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+531,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+532,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+533,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+534,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+535,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+536,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+537,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+538,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+539,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+540,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+541,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+542,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+543,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+544,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+545,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+546,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+547,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+548,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+550,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+551,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+552,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+554,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+556,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+560,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_mult_4x4x4x16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+13,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+17,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+21,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+25,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+29,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+305,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+309,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+313,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+317,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mxv0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+37,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+41,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+45,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+49,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+321+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ipu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+325,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+326+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+330+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+334,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+336,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+345,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+347,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+348+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+352+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+356,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+358,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+359+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+363+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+367,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mxv1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+109,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+110,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+112,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+113,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+114,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+117,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+369+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+125+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ipu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+137+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+141+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+373,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+374+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+378+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+382,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+145+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+149+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+384,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+385+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+389+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+393,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+153+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+157+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+395,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+396+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+400+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+404,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+161+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+165+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+406,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+407+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+411+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+415,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mxv2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+169+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+173,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+176,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+177,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+180,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+181,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+185,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+186,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+417+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+189+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+193+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ipu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+205+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+209+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+421,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+422+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+426+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+430,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+213+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+217+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+432,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+433+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+437+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+441,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+221+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+443,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+444+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+448+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+452,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+229+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+233+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+454,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+455+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+459+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+463,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mxv3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+237+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+241,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+245,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+246,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+247,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+249,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+253,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+255,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("results", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+465+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+257+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+261+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+265+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_col3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+269+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ipu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+273+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+277+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+469,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+470+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+474+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+478,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+281+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+285+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+480,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+481+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+485+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+489,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+289+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+293+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+491,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+492+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+496+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+500,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ipu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+513,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("activations", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+297+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+301+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+502,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("activations_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+503+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+507+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+511,0,"dot_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_init_top(Vmatrix_mult_4x4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_init_top\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmatrix_mult_4x4x4x16___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmatrix_mult_4x4x4x16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmatrix_mult_4x4x4x16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_register(Vmatrix_mult_4x4x4x16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_register\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmatrix_mult_4x4x4x16___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vmatrix_mult_4x4x4x16___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vmatrix_mult_4x4x4x16___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vmatrix_mult_4x4x4x16___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_const_0\n"); );
    // Body
    Vmatrix_mult_4x4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_mult_4x4x4x16___024root*>(voidSelf);
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_full_0_sub_0(Vmatrix_mult_4x4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_full_0\n"); );
    // Body
    Vmatrix_mult_4x4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_mult_4x4x4x16___024root*>(voidSelf);
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmatrix_mult_4x4x4x16___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmatrix_mult_4x4x4x16___024root__trace_full_0_sub_0(Vmatrix_mult_4x4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_mult_4x4x4x16___024root__trace_full_0_sub_0\n"); );
    Vmatrix_mult_4x4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+1,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [0U][0U]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [0U][1U]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [0U][2U]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [0U][3U]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [1U][0U]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [1U][1U]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [1U][2U]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [1U][3U]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                            [2U][0U]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [2U][1U]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [2U][2U]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [2U][3U]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [3U][0U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [3U][1U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [3U][2U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.matrix_mult_4x4x4x16__DOT__activations
                             [3U][3U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [0U][0U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [0U][1U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [0U][2U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [0U][3U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [1U][0U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [1U][1U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [1U][2U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [1U][3U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [2U][0U]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [2U][1U]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [2U][2U]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [2U][3U]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [3U][0U]),16);
    bufp->fullSData(oldp+30,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [3U][1U]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [3U][2U]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.matrix_mult_4x4x4x16__DOT__weights
                             [3U][3U]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[0]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[1]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[2]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__activations[3]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [0U][0U]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [0U][1U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [0U][2U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [0U][3U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [1U][0U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [1U][1U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [1U][2U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [1U][3U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [2U][0U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [2U][1U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [2U][2U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [2U][3U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [3U][0U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [3U][1U]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [3U][2U]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weights
                             [3U][3U]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[0]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[1]),16);
    bufp->fullSData(oldp+55,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[2]),16);
    bufp->fullSData(oldp+56,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col0[3]),16);
    bufp->fullSData(oldp+57,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[0]),16);
    bufp->fullSData(oldp+58,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[1]),16);
    bufp->fullSData(oldp+59,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[2]),16);
    bufp->fullSData(oldp+60,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col1[3]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[0]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[1]),16);
    bufp->fullSData(oldp+63,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[2]),16);
    bufp->fullSData(oldp+64,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col2[3]),16);
    bufp->fullSData(oldp+65,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[0]),16);
    bufp->fullSData(oldp+66,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[1]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[2]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__weight_col3[3]),16);
    bufp->fullSData(oldp+69,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[0]),16);
    bufp->fullSData(oldp+70,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[1]),16);
    bufp->fullSData(oldp+71,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[2]),16);
    bufp->fullSData(oldp+72,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations[3]),16);
    bufp->fullSData(oldp+73,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[0]),16);
    bufp->fullSData(oldp+74,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[1]),16);
    bufp->fullSData(oldp+75,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[2]),16);
    bufp->fullSData(oldp+76,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights[3]),16);
    bufp->fullSData(oldp+77,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[0]),16);
    bufp->fullSData(oldp+78,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[1]),16);
    bufp->fullSData(oldp+79,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[2]),16);
    bufp->fullSData(oldp+80,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations[3]),16);
    bufp->fullSData(oldp+81,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[0]),16);
    bufp->fullSData(oldp+82,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[1]),16);
    bufp->fullSData(oldp+83,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[2]),16);
    bufp->fullSData(oldp+84,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights[3]),16);
    bufp->fullSData(oldp+85,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[0]),16);
    bufp->fullSData(oldp+86,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[1]),16);
    bufp->fullSData(oldp+87,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[2]),16);
    bufp->fullSData(oldp+88,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations[3]),16);
    bufp->fullSData(oldp+89,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[0]),16);
    bufp->fullSData(oldp+90,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[1]),16);
    bufp->fullSData(oldp+91,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[2]),16);
    bufp->fullSData(oldp+92,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights[3]),16);
    bufp->fullSData(oldp+93,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[0]),16);
    bufp->fullSData(oldp+94,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[1]),16);
    bufp->fullSData(oldp+95,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[2]),16);
    bufp->fullSData(oldp+96,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations[3]),16);
    bufp->fullSData(oldp+97,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[0]),16);
    bufp->fullSData(oldp+98,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[1]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[2]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights[3]),16);
    bufp->fullSData(oldp+101,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[0]),16);
    bufp->fullSData(oldp+102,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[1]),16);
    bufp->fullSData(oldp+103,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[2]),16);
    bufp->fullSData(oldp+104,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__activations[3]),16);
    bufp->fullSData(oldp+105,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [0U][0U]),16);
    bufp->fullSData(oldp+106,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [0U][1U]),16);
    bufp->fullSData(oldp+107,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [0U][2U]),16);
    bufp->fullSData(oldp+108,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [0U][3U]),16);
    bufp->fullSData(oldp+109,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [1U][0U]),16);
    bufp->fullSData(oldp+110,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [1U][1U]),16);
    bufp->fullSData(oldp+111,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [1U][2U]),16);
    bufp->fullSData(oldp+112,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [1U][3U]),16);
    bufp->fullSData(oldp+113,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [2U][0U]),16);
    bufp->fullSData(oldp+114,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [2U][1U]),16);
    bufp->fullSData(oldp+115,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [2U][2U]),16);
    bufp->fullSData(oldp+116,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [2U][3U]),16);
    bufp->fullSData(oldp+117,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [3U][0U]),16);
    bufp->fullSData(oldp+118,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [3U][1U]),16);
    bufp->fullSData(oldp+119,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [3U][2U]),16);
    bufp->fullSData(oldp+120,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weights
                              [3U][3U]),16);
    bufp->fullSData(oldp+121,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[0]),16);
    bufp->fullSData(oldp+122,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[1]),16);
    bufp->fullSData(oldp+123,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[2]),16);
    bufp->fullSData(oldp+124,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col0[3]),16);
    bufp->fullSData(oldp+125,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[0]),16);
    bufp->fullSData(oldp+126,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[1]),16);
    bufp->fullSData(oldp+127,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[2]),16);
    bufp->fullSData(oldp+128,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col1[3]),16);
    bufp->fullSData(oldp+129,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[0]),16);
    bufp->fullSData(oldp+130,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[1]),16);
    bufp->fullSData(oldp+131,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[2]),16);
    bufp->fullSData(oldp+132,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col2[3]),16);
    bufp->fullSData(oldp+133,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[0]),16);
    bufp->fullSData(oldp+134,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[1]),16);
    bufp->fullSData(oldp+135,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[2]),16);
    bufp->fullSData(oldp+136,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__weight_col3[3]),16);
    bufp->fullSData(oldp+137,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[0]),16);
    bufp->fullSData(oldp+138,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[1]),16);
    bufp->fullSData(oldp+139,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[2]),16);
    bufp->fullSData(oldp+140,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations[3]),16);
    bufp->fullSData(oldp+141,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[0]),16);
    bufp->fullSData(oldp+142,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[1]),16);
    bufp->fullSData(oldp+143,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[2]),16);
    bufp->fullSData(oldp+144,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights[3]),16);
    bufp->fullSData(oldp+145,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[0]),16);
    bufp->fullSData(oldp+146,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[1]),16);
    bufp->fullSData(oldp+147,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[2]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations[3]),16);
    bufp->fullSData(oldp+149,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[0]),16);
    bufp->fullSData(oldp+150,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[1]),16);
    bufp->fullSData(oldp+151,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[2]),16);
    bufp->fullSData(oldp+152,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights[3]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[0]),16);
    bufp->fullSData(oldp+154,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[1]),16);
    bufp->fullSData(oldp+155,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[2]),16);
    bufp->fullSData(oldp+156,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations[3]),16);
    bufp->fullSData(oldp+157,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[0]),16);
    bufp->fullSData(oldp+158,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[1]),16);
    bufp->fullSData(oldp+159,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[2]),16);
    bufp->fullSData(oldp+160,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights[3]),16);
    bufp->fullSData(oldp+161,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[0]),16);
    bufp->fullSData(oldp+162,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[1]),16);
    bufp->fullSData(oldp+163,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[2]),16);
    bufp->fullSData(oldp+164,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations[3]),16);
    bufp->fullSData(oldp+165,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[0]),16);
    bufp->fullSData(oldp+166,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[1]),16);
    bufp->fullSData(oldp+167,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[2]),16);
    bufp->fullSData(oldp+168,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights[3]),16);
    bufp->fullSData(oldp+169,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[0]),16);
    bufp->fullSData(oldp+170,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[1]),16);
    bufp->fullSData(oldp+171,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[2]),16);
    bufp->fullSData(oldp+172,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__activations[3]),16);
    bufp->fullSData(oldp+173,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [0U][0U]),16);
    bufp->fullSData(oldp+174,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [0U][1U]),16);
    bufp->fullSData(oldp+175,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [0U][2U]),16);
    bufp->fullSData(oldp+176,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [0U][3U]),16);
    bufp->fullSData(oldp+177,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [1U][0U]),16);
    bufp->fullSData(oldp+178,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [1U][1U]),16);
    bufp->fullSData(oldp+179,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [1U][2U]),16);
    bufp->fullSData(oldp+180,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [1U][3U]),16);
    bufp->fullSData(oldp+181,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [2U][0U]),16);
    bufp->fullSData(oldp+182,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [2U][1U]),16);
    bufp->fullSData(oldp+183,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [2U][2U]),16);
    bufp->fullSData(oldp+184,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [2U][3U]),16);
    bufp->fullSData(oldp+185,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [3U][0U]),16);
    bufp->fullSData(oldp+186,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [3U][1U]),16);
    bufp->fullSData(oldp+187,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [3U][2U]),16);
    bufp->fullSData(oldp+188,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weights
                              [3U][3U]),16);
    bufp->fullSData(oldp+189,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[0]),16);
    bufp->fullSData(oldp+190,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[1]),16);
    bufp->fullSData(oldp+191,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[2]),16);
    bufp->fullSData(oldp+192,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col0[3]),16);
    bufp->fullSData(oldp+193,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[0]),16);
    bufp->fullSData(oldp+194,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[1]),16);
    bufp->fullSData(oldp+195,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[2]),16);
    bufp->fullSData(oldp+196,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col1[3]),16);
    bufp->fullSData(oldp+197,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[0]),16);
    bufp->fullSData(oldp+198,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[1]),16);
    bufp->fullSData(oldp+199,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[2]),16);
    bufp->fullSData(oldp+200,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col2[3]),16);
    bufp->fullSData(oldp+201,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[0]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[1]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[2]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__weight_col3[3]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[0]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[1]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[2]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations[3]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[0]),16);
    bufp->fullSData(oldp+210,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[1]),16);
    bufp->fullSData(oldp+211,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[2]),16);
    bufp->fullSData(oldp+212,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights[3]),16);
    bufp->fullSData(oldp+213,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[0]),16);
    bufp->fullSData(oldp+214,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[1]),16);
    bufp->fullSData(oldp+215,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[2]),16);
    bufp->fullSData(oldp+216,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations[3]),16);
    bufp->fullSData(oldp+217,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[0]),16);
    bufp->fullSData(oldp+218,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[1]),16);
    bufp->fullSData(oldp+219,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[2]),16);
    bufp->fullSData(oldp+220,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights[3]),16);
    bufp->fullSData(oldp+221,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[0]),16);
    bufp->fullSData(oldp+222,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[1]),16);
    bufp->fullSData(oldp+223,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[2]),16);
    bufp->fullSData(oldp+224,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations[3]),16);
    bufp->fullSData(oldp+225,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[0]),16);
    bufp->fullSData(oldp+226,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[1]),16);
    bufp->fullSData(oldp+227,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[2]),16);
    bufp->fullSData(oldp+228,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights[3]),16);
    bufp->fullSData(oldp+229,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[0]),16);
    bufp->fullSData(oldp+230,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[1]),16);
    bufp->fullSData(oldp+231,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[2]),16);
    bufp->fullSData(oldp+232,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations[3]),16);
    bufp->fullSData(oldp+233,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[0]),16);
    bufp->fullSData(oldp+234,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[1]),16);
    bufp->fullSData(oldp+235,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[2]),16);
    bufp->fullSData(oldp+236,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights[3]),16);
    bufp->fullSData(oldp+237,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[0]),16);
    bufp->fullSData(oldp+238,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[1]),16);
    bufp->fullSData(oldp+239,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[2]),16);
    bufp->fullSData(oldp+240,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__activations[3]),16);
    bufp->fullSData(oldp+241,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [0U][0U]),16);
    bufp->fullSData(oldp+242,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [0U][1U]),16);
    bufp->fullSData(oldp+243,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [0U][2U]),16);
    bufp->fullSData(oldp+244,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [0U][3U]),16);
    bufp->fullSData(oldp+245,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [1U][0U]),16);
    bufp->fullSData(oldp+246,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [1U][1U]),16);
    bufp->fullSData(oldp+247,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [1U][2U]),16);
    bufp->fullSData(oldp+248,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [1U][3U]),16);
    bufp->fullSData(oldp+249,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [2U][0U]),16);
    bufp->fullSData(oldp+250,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [2U][1U]),16);
    bufp->fullSData(oldp+251,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [2U][2U]),16);
    bufp->fullSData(oldp+252,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [2U][3U]),16);
    bufp->fullSData(oldp+253,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [3U][0U]),16);
    bufp->fullSData(oldp+254,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [3U][1U]),16);
    bufp->fullSData(oldp+255,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [3U][2U]),16);
    bufp->fullSData(oldp+256,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weights
                              [3U][3U]),16);
    bufp->fullSData(oldp+257,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[0]),16);
    bufp->fullSData(oldp+258,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[1]),16);
    bufp->fullSData(oldp+259,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[2]),16);
    bufp->fullSData(oldp+260,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col0[3]),16);
    bufp->fullSData(oldp+261,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[0]),16);
    bufp->fullSData(oldp+262,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[1]),16);
    bufp->fullSData(oldp+263,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[2]),16);
    bufp->fullSData(oldp+264,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col1[3]),16);
    bufp->fullSData(oldp+265,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[0]),16);
    bufp->fullSData(oldp+266,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[1]),16);
    bufp->fullSData(oldp+267,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[2]),16);
    bufp->fullSData(oldp+268,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col2[3]),16);
    bufp->fullSData(oldp+269,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[0]),16);
    bufp->fullSData(oldp+270,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[1]),16);
    bufp->fullSData(oldp+271,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[2]),16);
    bufp->fullSData(oldp+272,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__weight_col3[3]),16);
    bufp->fullSData(oldp+273,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[0]),16);
    bufp->fullSData(oldp+274,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[1]),16);
    bufp->fullSData(oldp+275,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[2]),16);
    bufp->fullSData(oldp+276,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations[3]),16);
    bufp->fullSData(oldp+277,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[0]),16);
    bufp->fullSData(oldp+278,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[1]),16);
    bufp->fullSData(oldp+279,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[2]),16);
    bufp->fullSData(oldp+280,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights[3]),16);
    bufp->fullSData(oldp+281,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[0]),16);
    bufp->fullSData(oldp+282,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[1]),16);
    bufp->fullSData(oldp+283,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[2]),16);
    bufp->fullSData(oldp+284,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations[3]),16);
    bufp->fullSData(oldp+285,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[0]),16);
    bufp->fullSData(oldp+286,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[1]),16);
    bufp->fullSData(oldp+287,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[2]),16);
    bufp->fullSData(oldp+288,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights[3]),16);
    bufp->fullSData(oldp+289,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[0]),16);
    bufp->fullSData(oldp+290,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[1]),16);
    bufp->fullSData(oldp+291,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[2]),16);
    bufp->fullSData(oldp+292,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations[3]),16);
    bufp->fullSData(oldp+293,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[0]),16);
    bufp->fullSData(oldp+294,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[1]),16);
    bufp->fullSData(oldp+295,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[2]),16);
    bufp->fullSData(oldp+296,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights[3]),16);
    bufp->fullSData(oldp+297,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[0]),16);
    bufp->fullSData(oldp+298,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[1]),16);
    bufp->fullSData(oldp+299,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[2]),16);
    bufp->fullSData(oldp+300,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations[3]),16);
    bufp->fullSData(oldp+301,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[0]),16);
    bufp->fullSData(oldp+302,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[1]),16);
    bufp->fullSData(oldp+303,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[2]),16);
    bufp->fullSData(oldp+304,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights[3]),16);
    bufp->fullIData(oldp+305,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [0U][0U]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [0U][1U]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [0U][2U]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [0U][3U]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [1U][0U]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [1U][1U]),32);
    bufp->fullIData(oldp+311,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [1U][2U]),32);
    bufp->fullIData(oldp+312,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [1U][3U]),32);
    bufp->fullIData(oldp+313,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [2U][0U]),32);
    bufp->fullIData(oldp+314,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [2U][1U]),32);
    bufp->fullIData(oldp+315,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [2U][2U]),32);
    bufp->fullIData(oldp+316,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [2U][3U]),32);
    bufp->fullIData(oldp+317,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [3U][0U]),32);
    bufp->fullIData(oldp+318,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [3U][1U]),32);
    bufp->fullIData(oldp+319,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [3U][2U]),32);
    bufp->fullIData(oldp+320,(vlSelfRef.matrix_mult_4x4x4x16__DOT__results
                              [3U][3U]),32);
    bufp->fullIData(oldp+321,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[0]),32);
    bufp->fullIData(oldp+322,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[1]),32);
    bufp->fullIData(oldp+323,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[2]),32);
    bufp->fullIData(oldp+324,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__results[3]),32);
    bufp->fullIData(oldp+325,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu0__result),32);
    bufp->fullSData(oldp+326,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+327,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+328,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+329,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+330,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+331,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+332,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+333,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+334,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+335,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu0__DOT__i),32);
    bufp->fullIData(oldp+336,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu1__result),32);
    bufp->fullSData(oldp+337,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+338,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+339,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+340,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+341,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+342,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+343,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+344,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+345,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+346,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu1__DOT__i),32);
    bufp->fullIData(oldp+347,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu2__result),32);
    bufp->fullSData(oldp+348,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+349,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+350,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+351,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+352,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+353,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+354,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+355,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+356,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+357,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu2__DOT__i),32);
    bufp->fullIData(oldp+358,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT____Vcellout__ipu3__result),32);
    bufp->fullSData(oldp+359,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+360,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+361,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+362,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+363,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+364,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+365,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+366,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+367,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+368,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv0__DOT__ipu3__DOT__i),32);
    bufp->fullIData(oldp+369,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[0]),32);
    bufp->fullIData(oldp+370,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[1]),32);
    bufp->fullIData(oldp+371,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[2]),32);
    bufp->fullIData(oldp+372,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__results[3]),32);
    bufp->fullIData(oldp+373,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu0__result),32);
    bufp->fullSData(oldp+374,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+375,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+376,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+377,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+378,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+379,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+380,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+381,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+382,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+383,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu0__DOT__i),32);
    bufp->fullIData(oldp+384,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu1__result),32);
    bufp->fullSData(oldp+385,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+386,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+387,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+388,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+389,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+390,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+391,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+392,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+393,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+394,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu1__DOT__i),32);
    bufp->fullIData(oldp+395,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu2__result),32);
    bufp->fullSData(oldp+396,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+397,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+398,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+399,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+400,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+401,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+402,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+403,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+404,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+405,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu2__DOT__i),32);
    bufp->fullIData(oldp+406,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT____Vcellout__ipu3__result),32);
    bufp->fullSData(oldp+407,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+408,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+409,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+410,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+411,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+412,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+413,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+414,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+415,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+416,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv1__DOT__ipu3__DOT__i),32);
    bufp->fullIData(oldp+417,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[0]),32);
    bufp->fullIData(oldp+418,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[1]),32);
    bufp->fullIData(oldp+419,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[2]),32);
    bufp->fullIData(oldp+420,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__results[3]),32);
    bufp->fullIData(oldp+421,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu0__result),32);
    bufp->fullSData(oldp+422,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+423,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+424,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+425,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+426,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+427,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+428,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+429,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+430,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+431,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu0__DOT__i),32);
    bufp->fullIData(oldp+432,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu1__result),32);
    bufp->fullSData(oldp+433,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+434,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+435,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+436,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+437,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+438,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+439,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+440,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+441,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+442,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu1__DOT__i),32);
    bufp->fullIData(oldp+443,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu2__result),32);
    bufp->fullSData(oldp+444,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+445,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+446,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+447,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+448,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+449,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+450,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+451,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+452,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+453,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu2__DOT__i),32);
    bufp->fullIData(oldp+454,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT____Vcellout__ipu3__result),32);
    bufp->fullSData(oldp+455,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+456,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+457,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+458,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+459,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+460,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+461,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+462,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+463,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+464,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv2__DOT__ipu3__DOT__i),32);
    bufp->fullIData(oldp+465,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[0]),32);
    bufp->fullIData(oldp+466,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[1]),32);
    bufp->fullIData(oldp+467,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[2]),32);
    bufp->fullIData(oldp+468,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__results[3]),32);
    bufp->fullIData(oldp+469,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu0__result),32);
    bufp->fullSData(oldp+470,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+471,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+472,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+473,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+474,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+475,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+476,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+477,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+478,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+479,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu0__DOT__i),32);
    bufp->fullIData(oldp+480,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu1__result),32);
    bufp->fullSData(oldp+481,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+482,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+483,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+484,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+485,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+486,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+487,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+488,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+489,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+490,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu1__DOT__i),32);
    bufp->fullIData(oldp+491,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu2__result),32);
    bufp->fullSData(oldp+492,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+493,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+494,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+495,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+496,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+497,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+498,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+499,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+500,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+501,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu2__DOT__i),32);
    bufp->fullIData(oldp+502,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT____Vcellout__ipu3__result),32);
    bufp->fullSData(oldp+503,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg[0]),16);
    bufp->fullSData(oldp+504,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg[1]),16);
    bufp->fullSData(oldp+505,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg[2]),16);
    bufp->fullSData(oldp+506,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg[3]),16);
    bufp->fullSData(oldp+507,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg[0]),16);
    bufp->fullSData(oldp+508,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg[1]),16);
    bufp->fullSData(oldp+509,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg[2]),16);
    bufp->fullSData(oldp+510,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg[3]),16);
    bufp->fullIData(oldp+511,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                             vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg
                                                             [0U]), 
                                           VL_EXTENDS_II(32,16, 
                                                         vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg
                                                         [0U])) 
                               + (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg
                                                                [1U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg
                                                            [1U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg
                                                               [2U]), 
                                                 VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg
                                                               [2U])) 
                                     + VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__activations_reg
                                                                 [3U]), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__weights_reg
                                                                 [3U])))))),32);
    bufp->fullIData(oldp+512,(vlSelfRef.matrix_mult_4x4x4x16__DOT__mxv3__DOT__ipu3__DOT__i),32);
    bufp->fullBit(oldp+513,(vlSelfRef.clk));
    bufp->fullBit(oldp+514,(vlSelfRef.reset));
    bufp->fullBit(oldp+515,(vlSelfRef.enable));
    bufp->fullSData(oldp+516,(vlSelfRef.activations
                              [0U][0U]),16);
    bufp->fullSData(oldp+517,(vlSelfRef.activations
                              [0U][1U]),16);
    bufp->fullSData(oldp+518,(vlSelfRef.activations
                              [0U][2U]),16);
    bufp->fullSData(oldp+519,(vlSelfRef.activations
                              [0U][3U]),16);
    bufp->fullSData(oldp+520,(vlSelfRef.activations
                              [1U][0U]),16);
    bufp->fullSData(oldp+521,(vlSelfRef.activations
                              [1U][1U]),16);
    bufp->fullSData(oldp+522,(vlSelfRef.activations
                              [1U][2U]),16);
    bufp->fullSData(oldp+523,(vlSelfRef.activations
                              [1U][3U]),16);
    bufp->fullSData(oldp+524,(vlSelfRef.activations
                              [2U][0U]),16);
    bufp->fullSData(oldp+525,(vlSelfRef.activations
                              [2U][1U]),16);
    bufp->fullSData(oldp+526,(vlSelfRef.activations
                              [2U][2U]),16);
    bufp->fullSData(oldp+527,(vlSelfRef.activations
                              [2U][3U]),16);
    bufp->fullSData(oldp+528,(vlSelfRef.activations
                              [3U][0U]),16);
    bufp->fullSData(oldp+529,(vlSelfRef.activations
                              [3U][1U]),16);
    bufp->fullSData(oldp+530,(vlSelfRef.activations
                              [3U][2U]),16);
    bufp->fullSData(oldp+531,(vlSelfRef.activations
                              [3U][3U]),16);
    bufp->fullSData(oldp+532,(vlSelfRef.weights[0U]
                              [0U]),16);
    bufp->fullSData(oldp+533,(vlSelfRef.weights[0U]
                              [1U]),16);
    bufp->fullSData(oldp+534,(vlSelfRef.weights[0U]
                              [2U]),16);
    bufp->fullSData(oldp+535,(vlSelfRef.weights[0U]
                              [3U]),16);
    bufp->fullSData(oldp+536,(vlSelfRef.weights[1U]
                              [0U]),16);
    bufp->fullSData(oldp+537,(vlSelfRef.weights[1U]
                              [1U]),16);
    bufp->fullSData(oldp+538,(vlSelfRef.weights[1U]
                              [2U]),16);
    bufp->fullSData(oldp+539,(vlSelfRef.weights[1U]
                              [3U]),16);
    bufp->fullSData(oldp+540,(vlSelfRef.weights[2U]
                              [0U]),16);
    bufp->fullSData(oldp+541,(vlSelfRef.weights[2U]
                              [1U]),16);
    bufp->fullSData(oldp+542,(vlSelfRef.weights[2U]
                              [2U]),16);
    bufp->fullSData(oldp+543,(vlSelfRef.weights[2U]
                              [3U]),16);
    bufp->fullSData(oldp+544,(vlSelfRef.weights[3U]
                              [0U]),16);
    bufp->fullSData(oldp+545,(vlSelfRef.weights[3U]
                              [1U]),16);
    bufp->fullSData(oldp+546,(vlSelfRef.weights[3U]
                              [2U]),16);
    bufp->fullSData(oldp+547,(vlSelfRef.weights[3U]
                              [3U]),16);
    bufp->fullIData(oldp+548,(vlSelfRef.results[0U]
                              [0U]),32);
    bufp->fullIData(oldp+549,(vlSelfRef.results[0U]
                              [1U]),32);
    bufp->fullIData(oldp+550,(vlSelfRef.results[0U]
                              [2U]),32);
    bufp->fullIData(oldp+551,(vlSelfRef.results[0U]
                              [3U]),32);
    bufp->fullIData(oldp+552,(vlSelfRef.results[1U]
                              [0U]),32);
    bufp->fullIData(oldp+553,(vlSelfRef.results[1U]
                              [1U]),32);
    bufp->fullIData(oldp+554,(vlSelfRef.results[1U]
                              [2U]),32);
    bufp->fullIData(oldp+555,(vlSelfRef.results[1U]
                              [3U]),32);
    bufp->fullIData(oldp+556,(vlSelfRef.results[2U]
                              [0U]),32);
    bufp->fullIData(oldp+557,(vlSelfRef.results[2U]
                              [1U]),32);
    bufp->fullIData(oldp+558,(vlSelfRef.results[2U]
                              [2U]),32);
    bufp->fullIData(oldp+559,(vlSelfRef.results[2U]
                              [3U]),32);
    bufp->fullIData(oldp+560,(vlSelfRef.results[3U]
                              [0U]),32);
    bufp->fullIData(oldp+561,(vlSelfRef.results[3U]
                              [1U]),32);
    bufp->fullIData(oldp+562,(vlSelfRef.results[3U]
                              [2U]),32);
    bufp->fullIData(oldp+563,(vlSelfRef.results[3U]
                              [3U]),32);
}
