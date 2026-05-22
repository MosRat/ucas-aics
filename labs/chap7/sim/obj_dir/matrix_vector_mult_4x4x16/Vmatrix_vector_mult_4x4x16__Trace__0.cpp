// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmatrix_vector_mult_4x4x16__Syms.h"


void Vmatrix_vector_mult_4x4x16___024root__trace_chg_0_sub_0(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmatrix_vector_mult_4x4x16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_chg_0\n"); );
    // Body
    Vmatrix_vector_mult_4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_vector_mult_4x4x16___024root*>(voidSelf);
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vmatrix_vector_mult_4x4x16___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmatrix_vector_mult_4x4x16___024root__trace_chg_0_sub_0(Vmatrix_vector_mult_4x4x16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_chg_0_sub_0\n"); );
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[0]),16);
        bufp->chgSData(oldp+1,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[1]),16);
        bufp->chgSData(oldp+2,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[2]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__activations[3]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [0U][0U]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [0U][1U]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [0U][2U]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [0U][3U]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [1U][0U]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                               [1U][1U]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [1U][2U]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [1U][3U]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [2U][0U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [2U][1U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [2U][2U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [2U][3U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [3U][0U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [3U][1U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [3U][2U]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weights
                                [3U][3U]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[0]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[1]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[2]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col0[3]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[0]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[1]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[2]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col1[3]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[0]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[1]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[2]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col2[3]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[0]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[1]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[2]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__weight_col3[3]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[0]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[1]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[2]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations[3]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[0]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[1]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[2]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights[3]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[0]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[1]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[2]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations[3]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[0]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[1]),16);
        bufp->chgSData(oldp+50,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[2]),16);
        bufp->chgSData(oldp+51,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights[3]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[0]),16);
        bufp->chgSData(oldp+53,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[1]),16);
        bufp->chgSData(oldp+54,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[2]),16);
        bufp->chgSData(oldp+55,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations[3]),16);
        bufp->chgSData(oldp+56,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[0]),16);
        bufp->chgSData(oldp+57,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[1]),16);
        bufp->chgSData(oldp+58,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[2]),16);
        bufp->chgSData(oldp+59,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights[3]),16);
        bufp->chgSData(oldp+60,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[0]),16);
        bufp->chgSData(oldp+61,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[1]),16);
        bufp->chgSData(oldp+62,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[2]),16);
        bufp->chgSData(oldp+63,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations[3]),16);
        bufp->chgSData(oldp+64,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[0]),16);
        bufp->chgSData(oldp+65,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[1]),16);
        bufp->chgSData(oldp+66,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[2]),16);
        bufp->chgSData(oldp+67,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights[3]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+68,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[0]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[1]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[2]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__results[3]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu0__result),32);
        bufp->chgSData(oldp+73,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[0]),16);
        bufp->chgSData(oldp+74,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[1]),16);
        bufp->chgSData(oldp+75,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[2]),16);
        bufp->chgSData(oldp+76,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg[3]),16);
        bufp->chgSData(oldp+77,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[0]),16);
        bufp->chgSData(oldp+78,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[1]),16);
        bufp->chgSData(oldp+79,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[2]),16);
        bufp->chgSData(oldp+80,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg[3]),16);
        bufp->chgIData(oldp+81,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__activations_reg
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__weights_reg
                                                           [0U])) 
                                 + (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
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
        bufp->chgIData(oldp+82,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu0__DOT__i),32);
        bufp->chgIData(oldp+83,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu1__result),32);
        bufp->chgSData(oldp+84,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[0]),16);
        bufp->chgSData(oldp+85,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[1]),16);
        bufp->chgSData(oldp+86,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[2]),16);
        bufp->chgSData(oldp+87,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg[3]),16);
        bufp->chgSData(oldp+88,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[0]),16);
        bufp->chgSData(oldp+89,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[1]),16);
        bufp->chgSData(oldp+90,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[2]),16);
        bufp->chgSData(oldp+91,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg[3]),16);
        bufp->chgIData(oldp+92,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                               vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__activations_reg
                                                               [0U]), 
                                             VL_EXTENDS_II(32,16, 
                                                           vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__weights_reg
                                                           [0U])) 
                                 + (VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
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
        bufp->chgIData(oldp+93,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu1__DOT__i),32);
        bufp->chgIData(oldp+94,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu2__result),32);
        bufp->chgSData(oldp+95,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[0]),16);
        bufp->chgSData(oldp+96,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[1]),16);
        bufp->chgSData(oldp+97,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[2]),16);
        bufp->chgSData(oldp+98,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg[3]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[0]),16);
        bufp->chgSData(oldp+100,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[1]),16);
        bufp->chgSData(oldp+101,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[2]),16);
        bufp->chgSData(oldp+102,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg[3]),16);
        bufp->chgIData(oldp+103,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__activations_reg
                                                                [0U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__weights_reg
                                                            [0U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
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
        bufp->chgIData(oldp+104,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu2__DOT__i),32);
        bufp->chgIData(oldp+105,(vlSelfRef.matrix_vector_mult_4x4x16__DOT____Vcellout__ipu3__result),32);
        bufp->chgSData(oldp+106,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[0]),16);
        bufp->chgSData(oldp+107,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[1]),16);
        bufp->chgSData(oldp+108,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[2]),16);
        bufp->chgSData(oldp+109,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg[3]),16);
        bufp->chgSData(oldp+110,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[0]),16);
        bufp->chgSData(oldp+111,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[1]),16);
        bufp->chgSData(oldp+112,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[2]),16);
        bufp->chgSData(oldp+113,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg[3]),16);
        bufp->chgIData(oldp+114,((VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                                vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__activations_reg
                                                                [0U]), 
                                              VL_EXTENDS_II(32,16, 
                                                            vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__weights_reg
                                                            [0U])) 
                                  + (VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, 
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
        bufp->chgIData(oldp+115,(vlSelfRef.matrix_vector_mult_4x4x16__DOT__ipu3__DOT__i),32);
    }
    bufp->chgBit(oldp+116,(vlSelfRef.clk));
    bufp->chgBit(oldp+117,(vlSelfRef.reset));
    bufp->chgBit(oldp+118,(vlSelfRef.enable));
    bufp->chgSData(oldp+119,(vlSelfRef.activations[0]),16);
    bufp->chgSData(oldp+120,(vlSelfRef.activations[1]),16);
    bufp->chgSData(oldp+121,(vlSelfRef.activations[2]),16);
    bufp->chgSData(oldp+122,(vlSelfRef.activations[3]),16);
    bufp->chgSData(oldp+123,(vlSelfRef.weights[0U][0U]),16);
    bufp->chgSData(oldp+124,(vlSelfRef.weights[0U][1U]),16);
    bufp->chgSData(oldp+125,(vlSelfRef.weights[0U][2U]),16);
    bufp->chgSData(oldp+126,(vlSelfRef.weights[0U][3U]),16);
    bufp->chgSData(oldp+127,(vlSelfRef.weights[1U][0U]),16);
    bufp->chgSData(oldp+128,(vlSelfRef.weights[1U][1U]),16);
    bufp->chgSData(oldp+129,(vlSelfRef.weights[1U][2U]),16);
    bufp->chgSData(oldp+130,(vlSelfRef.weights[1U][3U]),16);
    bufp->chgSData(oldp+131,(vlSelfRef.weights[2U][0U]),16);
    bufp->chgSData(oldp+132,(vlSelfRef.weights[2U][1U]),16);
    bufp->chgSData(oldp+133,(vlSelfRef.weights[2U][2U]),16);
    bufp->chgSData(oldp+134,(vlSelfRef.weights[2U][3U]),16);
    bufp->chgSData(oldp+135,(vlSelfRef.weights[3U][0U]),16);
    bufp->chgSData(oldp+136,(vlSelfRef.weights[3U][1U]),16);
    bufp->chgSData(oldp+137,(vlSelfRef.weights[3U][2U]),16);
    bufp->chgSData(oldp+138,(vlSelfRef.weights[3U][3U]),16);
    bufp->chgIData(oldp+139,(vlSelfRef.results[0]),32);
    bufp->chgIData(oldp+140,(vlSelfRef.results[1]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.results[2]),32);
    bufp->chgIData(oldp+142,(vlSelfRef.results[3]),32);
}

void Vmatrix_vector_mult_4x4x16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmatrix_vector_mult_4x4x16___024root__trace_cleanup\n"); );
    // Body
    Vmatrix_vector_mult_4x4x16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmatrix_vector_mult_4x4x16___024root*>(voidSelf);
    Vmatrix_vector_mult_4x4x16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
