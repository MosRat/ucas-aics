// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_product_4x16.h for the primary calling header

#include "Vinner_product_4x16__pch.h"

void Vinner_product_4x16___024root___ctor_var_reset(Vinner_product_4x16___024root* vlSelf);

Vinner_product_4x16___024root::Vinner_product_4x16___024root(Vinner_product_4x16__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vinner_product_4x16___024root___ctor_var_reset(this);
}

void Vinner_product_4x16___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinner_product_4x16___024root::~Vinner_product_4x16___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
