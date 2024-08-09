// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtables__Syms.h"


VL_ATTR_COLD void Vtables___024root__trace_init_sub__TOP__0(Vtables___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("tables", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtables___024root__trace_init_top(Vtables___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtables___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtables___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtables___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtables___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtables___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtables___024root__trace_register(Vtables___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtables___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtables___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtables___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtables___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtables___024root__trace_const_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtables___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_const_0\n"); );
    // Init
    Vtables___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtables___024root*>(voidSelf);
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtables___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtables___024root__trace_const_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+6,(vlSelfRef.tables__DOT__store),4);
}

VL_ATTR_COLD void Vtables___024root__trace_full_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtables___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_full_0\n"); );
    // Init
    Vtables___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtables___024root*>(voidSelf);
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtables___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtables___024root__trace_full_0_sub_0(Vtables___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.num),4);
    bufp->fullBit(oldp+2,(vlSelfRef.reset));
    bufp->fullBit(oldp+3,(vlSelfRef.clk));
    bufp->fullSData(oldp+4,(vlSelfRef.out),9);
    bufp->fullCData(oldp+5,(vlSelfRef.tables__DOT__counter),4);
}
