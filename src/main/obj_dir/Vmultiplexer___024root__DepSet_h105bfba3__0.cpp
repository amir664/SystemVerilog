// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplexer.h for the primary calling header

#include "Vmultiplexer__pch.h"
#include "Vmultiplexer__Syms.h"
#include "Vmultiplexer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplexer___024root___dump_triggers__act(Vmultiplexer___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplexer___024root___eval_triggers__act(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplexer___024root___dump_triggers__act(vlSelf);
    }
#endif
}
