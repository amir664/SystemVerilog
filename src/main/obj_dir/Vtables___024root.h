// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtables.h for the primary calling header

#ifndef VERILATED_VTABLES___024ROOT_H_
#define VERILATED_VTABLES___024ROOT_H_  // guard

#include "verilated.h"


class Vtables__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtables___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(num,3,0);
    CData/*3:0*/ tables__DOT__counter;
    CData/*3:0*/ tables__DOT__store;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(out,8,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtables__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtables___024root(Vtables__Syms* symsp, const char* v__name);
    ~Vtables___024root();
    VL_UNCOPYABLE(Vtables___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
