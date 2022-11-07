// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__clkTick__DOT__count = vlSelf->top__DOT__clkTick__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__stateMachine__DOT__current_state = 0U;
    } else if (vlSelf->top__DOT__cnt) {
        vlSelf->top__DOT__stateMachine__DOT__current_state 
            = vlSelf->top__DOT__stateMachine__DOT__next_state;
    }
    if (((((((((0U == vlSelf->top__DOT__stateMachine__DOT__current_state) 
               | (1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__stateMachine__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->top__DOT__stateMachine__DOT__next_state = 8U;
            vlSelf->out = 0x7fU;
        }
    } else {
        vlSelf->top__DOT__stateMachine__DOT__next_state = 0U;
        vlSelf->out = ((8U == vlSelf->top__DOT__stateMachine__DOT__current_state)
                        ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__cnt = 0U;
        vlSelf->__Vdly__top__DOT__clkTick__DOT__count 
            = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->top__DOT__clkTick__DOT__count))) {
            vlSelf->top__DOT__cnt = 1U;
            vlSelf->__Vdly__top__DOT__clkTick__DOT__count 
                = vlSelf->N;
        } else {
            vlSelf->__Vdly__top__DOT__clkTick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->top__DOT__clkTick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->top__DOT__cnt = 0U;
        }
    }
    vlSelf->top__DOT__clkTick__DOT__count = vlSelf->__Vdly__top__DOT__clkTick__DOT__count;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
