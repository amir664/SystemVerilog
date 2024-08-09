// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplexer.h for the primary calling header

#include "Vmultiplexer__pch.h"
#include "Vmultiplexer___024root.h"

VL_ATTR_COLD void Vmultiplexer___024root___eval_static(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmultiplexer___024root___eval_initial(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vmultiplexer___024root___eval_final(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmultiplexer___024root___eval_settle(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplexer___024root___dump_triggers__act(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplexer___024root___dump_triggers__nba(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplexer___024root___ctor_var_reset(Vmultiplexer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplexer___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->input1 = VL_RAND_RESET_I(4);
    vlSelf->input2 = VL_RAND_RESET_I(4);
    vlSelf->input3 = VL_RAND_RESET_I(4);
    vlSelf->input4 = VL_RAND_RESET_I(4);
    vlSelf->sel = VL_RAND_RESET_I(2);
    vlSelf->out = VL_RAND_RESET_I(4);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
