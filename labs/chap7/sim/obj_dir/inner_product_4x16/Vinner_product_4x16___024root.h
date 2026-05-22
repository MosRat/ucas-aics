// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinner_product_4x16.h for the primary calling header

#ifndef VERILATED_VINNER_PRODUCT_4X16___024ROOT_H_
#define VERILATED_VINNER_PRODUCT_4X16___024ROOT_H_  // guard

#include "verilated.h"


class Vinner_product_4x16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinner_product_4x16___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    VL_OUT(result,31,0);
    IData/*31:0*/ inner_product_4x16__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_IN16(activations[4],15,0);
    VL_IN16(weights[4],15,0);
    VlUnpacked<SData/*15:0*/, 4> inner_product_4x16__DOT__activations;
    VlUnpacked<SData/*15:0*/, 4> inner_product_4x16__DOT__weights;
    VlUnpacked<SData/*15:0*/, 4> inner_product_4x16__DOT__activations_reg;
    VlUnpacked<SData/*15:0*/, 4> inner_product_4x16__DOT__weights_reg;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vinner_product_4x16__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vinner_product_4x16___024root(Vinner_product_4x16__Syms* symsp, const char* namep);
    ~Vinner_product_4x16___024root();
    VL_UNCOPYABLE(Vinner_product_4x16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
