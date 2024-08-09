// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtables.h for the primary calling header

#include "Vtables__pch.h"
#include "Vtables__Syms.h"
#include "Vtables___024root.h"

void Vtables___024root___ctor_var_reset(Vtables___024root* vlSelf);

Vtables___024root::Vtables___024root(Vtables__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtables___024root___ctor_var_reset(this);
}

void Vtables___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtables___024root::~Vtables___024root() {
}
