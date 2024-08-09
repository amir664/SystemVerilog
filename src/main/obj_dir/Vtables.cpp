// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtables__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtables::Vtables(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtables__Syms(contextp(), _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , clk{vlSymsp->TOP.clk}
    , num{vlSymsp->TOP.num}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtables::Vtables(const char* _vcname__)
    : Vtables(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtables::~Vtables() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtables___024root___eval_debug_assertions(Vtables___024root* vlSelf);
#endif  // VL_DEBUG
void Vtables___024root___eval_static(Vtables___024root* vlSelf);
void Vtables___024root___eval_initial(Vtables___024root* vlSelf);
void Vtables___024root___eval_settle(Vtables___024root* vlSelf);
void Vtables___024root___eval(Vtables___024root* vlSelf);

void Vtables::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtables::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtables___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtables___024root___eval_static(&(vlSymsp->TOP));
        Vtables___024root___eval_initial(&(vlSymsp->TOP));
        Vtables___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtables___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtables::eventsPending() { return false; }

uint64_t Vtables::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtables::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtables___024root___eval_final(Vtables___024root* vlSelf);

VL_ATTR_COLD void Vtables::final() {
    Vtables___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtables::hierName() const { return vlSymsp->name(); }
const char* Vtables::modelName() const { return "Vtables"; }
unsigned Vtables::threads() const { return 1; }
void Vtables::prepareClone() const { contextp()->prepareClone(); }
void Vtables::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtables::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtables___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtables___024root__trace_init_top(Vtables___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtables___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtables___024root*>(voidSelf);
    Vtables__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtables___024root__trace_decl_types(tracep);
    Vtables___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vtables___024root__trace_register(Vtables___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtables::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtables::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtables___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}