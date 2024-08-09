// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtables__Syms.h"


void Vtables___024root__trace_chg_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtables___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_chg_0\n"); );
    // Init
    Vtables___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtables___024root*>(voidSelf);
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtables___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtables___024root__trace_chg_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.num),4);
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.clk));
    bufp->chgSData(oldp+3,(vlSelfRef.out),9);
    bufp->chgCData(oldp+4,(vlSelfRef.tables__DOT__counter),4);
}

void Vtables___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_cleanup\n"); );
    // Init
    Vtables___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtables___024root*>(voidSelf);
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
