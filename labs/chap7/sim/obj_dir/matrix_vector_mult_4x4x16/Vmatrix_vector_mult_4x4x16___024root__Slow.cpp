// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmatrix_vector_mult_4x4x16.h for the primary calling header

#include "Vmatrix_vector_mult_4x4x16__pch.h"

void Vmatrix_vector_mult_4x4x16___024root___ctor_var_reset(Vmatrix_vector_mult_4x4x16___024root* vlSelf);

Vmatrix_vector_mult_4x4x16___024root::Vmatrix_vector_mult_4x4x16___024root(Vmatrix_vector_mult_4x4x16__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmatrix_vector_mult_4x4x16___024root___ctor_var_reset(this);
}

void Vmatrix_vector_mult_4x4x16___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmatrix_vector_mult_4x4x16___024root::~Vmatrix_vector_mult_4x4x16___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
