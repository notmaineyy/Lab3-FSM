// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBit(c+6,"cnt", false,-1);
    tracep->pushNamePrefix("clkTick ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stateMachine ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullSData(oldp+4,(vlSelf->N),16);
    bufp->fullCData(oldp+5,(vlSelf->out),8);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__cnt));
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__clkTick__DOT__count),16);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__stateMachine__DOT__current_state),32);
    bufp->fullIData(oldp+9,((((((((((0U == vlSelf->top__DOT__stateMachine__DOT__current_state) 
                                    | (1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                                   | (2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                                  | (3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                                 | (4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                                | (5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                               | (6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
                              | (7U == vlSelf->top__DOT__stateMachine__DOT__current_state))
                              ? ((0U == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->top__DOT__stateMachine__DOT__current_state)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
    bufp->fullIData(oldp+10,(0x10U),32);
    bufp->fullIData(oldp+11,(8U),32);
}
