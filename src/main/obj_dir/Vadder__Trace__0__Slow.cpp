// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


VL_ATTR_COLD void Vadder___024root__trace_init_sub__TOP__0(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadder___024root__trace_init_top(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vadder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadder___024root__trace_register(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vadder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vadder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vadder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vadder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_const_0\n"); );
    // Init
    Vadder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vadder___024root__trace_full_0_sub_0(Vadder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_full_0\n"); );
    // Init
    Vadder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadder___024root__trace_full_0_sub_0(Vadder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.b),4);
    bufp->fullBit(oldp+3,(vlSelfRef.reset));
    bufp->fullCData(oldp+4,(vlSelfRef.c),4);
    bufp->fullBit(oldp+5,(vlSelfRef.clk));
}
