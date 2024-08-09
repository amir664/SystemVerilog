// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtables.h for the primary calling header

#include "Vtables__pch.h"
#include "Vtables___024root.h"

void Vtables___024root___eval_act(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtables___024root___nba_sequent__TOP__0(Vtables___024root* vlSelf);

void Vtables___024root___eval_nba(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtables___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtables___024root___nba_sequent__TOP__0(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.out = (0x1ffU & ((IData)(vlSelfRef.num) 
                                   * (IData)(vlSelfRef.tables__DOT__counter)));
        vlSelfRef.tables__DOT__counter = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tables__DOT__counter)));
    }
}

void Vtables___024root___eval_triggers__act(Vtables___024root* vlSelf);

bool Vtables___024root___eval_phase__act(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtables___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtables___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtables___024root___eval_phase__nba(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtables___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtables___024root___dump_triggers__nba(Vtables___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtables___024root___dump_triggers__act(Vtables___024root* vlSelf);
#endif  // VL_DEBUG

void Vtables___024root___eval(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval\n"); );
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
            Vtables___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tables.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtables___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tables.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtables___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtables___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtables___024root___eval_debug_assertions(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.num & 0xf0U))) {
        Verilated::overWidthError("num");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
