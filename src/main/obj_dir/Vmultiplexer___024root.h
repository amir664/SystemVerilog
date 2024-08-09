// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplexer.h for the primary calling header

#ifndef VERILATED_VMULTIPLEXER___024ROOT_H_
#define VERILATED_VMULTIPLEXER___024ROOT_H_  // guard

#include "verilated.h"


class Vmultiplexer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmultiplexer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(input1,3,0);
    VL_IN8(input2,3,0);
    VL_IN8(input3,3,0);
    VL_IN8(input4,3,0);
    VL_IN8(sel,1,0);
    VL_OUT8(out,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmultiplexer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplexer___024root(Vmultiplexer__Syms* symsp, const char* v__name);
    ~Vmultiplexer___024root();
    VL_UNCOPYABLE(Vmultiplexer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
