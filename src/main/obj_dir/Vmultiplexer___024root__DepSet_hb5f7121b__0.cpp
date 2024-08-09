// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplexer.h for the primary calling header

#include "Vmultiplexer__pch.h"
#include "Vmultiplexer___024root.h"

void Vmultiplexer___024root___eval_act(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmultiplexer___024root___nba_sequent__TOP__0(Vmultiplexer___024root* vlSelf);

void Vmultiplexer___024root___eval_nba(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmultiplexer___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmultiplexer___024root___nba_sequent__TOP__0(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = ((IData)(vlSelfRef.rst_n) ? ((2U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.input4)
                                                   : (IData)(vlSelfRef.input3))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.input2)
                                                   : (IData)(vlSelfRef.input1)))
                      : 0U);
}

void Vmultiplexer___024root___eval_triggers__act(Vmultiplexer___024root* vlSelf);

bool Vmultiplexer___024root___eval_phase__act(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmultiplexer___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmultiplexer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmultiplexer___024root___eval_phase__nba(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmultiplexer___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplexer___024root___dump_triggers__nba(Vmultiplexer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplexer___024root___dump_triggers__act(Vmultiplexer___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplexer___024root___eval(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmultiplexer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multiplexer.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmultiplexer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multiplexer.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmultiplexer___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmultiplexer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplexer___024root___eval_debug_assertions(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.input1 & 0xf0U))) {
        Verilated::overWidthError("input1");}
    if (VL_UNLIKELY((vlSelfRef.input2 & 0xf0U))) {
        Verilated::overWidthError("input2");}
    if (VL_UNLIKELY((vlSelfRef.input3 & 0xf0U))) {
        Verilated::overWidthError("input3");}
    if (VL_UNLIKELY((vlSelfRef.input4 & 0xf0U))) {
        Verilated::overWidthError("input4");}
    if (VL_UNLIKELY((vlSelfRef.sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
