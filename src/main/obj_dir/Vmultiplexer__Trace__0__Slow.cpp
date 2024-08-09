// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmultiplexer__Syms.h"


VL_ATTR_COLD void Vmultiplexer___024root__trace_init_sub__TOP__0(Vmultiplexer___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"input2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"input3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"input4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("multiplexer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"input2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"input3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"input4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_init_top(Vmultiplexer___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmultiplexer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmultiplexer___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmultiplexer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmultiplexer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmultiplexer___024root__trace_register(Vmultiplexer___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmultiplexer___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmultiplexer___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmultiplexer___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmultiplexer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_const_0\n"); );
    // Init
    Vmultiplexer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplexer___024root*>(voidSelf);
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_full_0_sub_0(Vmultiplexer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmultiplexer___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_full_0\n"); );
    // Init
    Vmultiplexer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplexer___024root*>(voidSelf);
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmultiplexer___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_full_0_sub_0(Vmultiplexer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.input1),4);
    bufp->fullCData(oldp+2,(vlSelfRef.input2),4);
    bufp->fullCData(oldp+3,(vlSelfRef.input3),4);
    bufp->fullCData(oldp+4,(vlSelfRef.input4),4);
    bufp->fullCData(oldp+5,(vlSelfRef.sel),2);
    bufp->fullCData(oldp+6,(vlSelfRef.out),4);
    bufp->fullBit(oldp+7,(vlSelfRef.clk));
    bufp->fullBit(oldp+8,(vlSelfRef.rst_n));
}
