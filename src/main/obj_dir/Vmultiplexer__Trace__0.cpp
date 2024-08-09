// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmultiplexer__Syms.h"


void Vmultiplexer___024root__trace_chg_0_sub_0(Vmultiplexer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmultiplexer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_chg_0\n"); );
    // Init
    Vmultiplexer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplexer___024root*>(voidSelf);
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmultiplexer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmultiplexer___024root__trace_chg_0_sub_0(Vmultiplexer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.input1),4);
    bufp->chgCData(oldp+1,(vlSelfRef.input2),4);
    bufp->chgCData(oldp+2,(vlSelfRef.input3),4);
    bufp->chgCData(oldp+3,(vlSelfRef.input4),4);
    bufp->chgCData(oldp+4,(vlSelfRef.sel),2);
    bufp->chgCData(oldp+5,(vlSelfRef.out),4);
    bufp->chgBit(oldp+6,(vlSelfRef.clk));
    bufp->chgBit(oldp+7,(vlSelfRef.rst_n));
}

void Vmultiplexer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_cleanup\n"); );
    // Init
    Vmultiplexer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplexer___024root*>(voidSelf);
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
