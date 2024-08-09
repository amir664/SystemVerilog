// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtables.h for the primary calling header

#include "Vtables__pch.h"
#include "Vtables___024root.h"

VL_ATTR_COLD void Vtables___024root___eval_static(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtables___024root___eval_initial(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vtables___024root___eval_final(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtables___024root___eval_settle(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtables___024root___dump_triggers__act(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtables___024root___dump_triggers__nba(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtables___024root___ctor_var_reset(Vtables___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtables___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->num = VL_RAND_RESET_I(4);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(9);
    vlSelf->tables__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->tables__DOT__store = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
