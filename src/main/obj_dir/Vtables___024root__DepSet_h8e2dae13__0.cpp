// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtables.h for the primary calling header

#include "Vtables__pch.h"
#include "Vtables__Syms.h"
#include "Vtables___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtables___024root___dump_triggers__act(Vtables___024root* vlSelf);
#endif  // VL_DEBUG

void Vtables___024root___eval_triggers__act(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.reset)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtables___024root___dump_triggers__act(vlSelf);
    }
#endif
}
