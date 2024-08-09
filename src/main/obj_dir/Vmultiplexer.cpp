// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultiplexer__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmultiplexer::Vmultiplexer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmultiplexer__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , input1{vlSymsp->TOP.input1}
    , input2{vlSymsp->TOP.input2}
    , input3{vlSymsp->TOP.input3}
    , input4{vlSymsp->TOP.input4}
    , sel{vlSymsp->TOP.sel}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmultiplexer::Vmultiplexer(const char* _vcname__)
    : Vmultiplexer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmultiplexer::~Vmultiplexer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmultiplexer___024root___eval_debug_assertions(Vmultiplexer___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplexer___024root___eval_static(Vmultiplexer___024root* vlSelf);
void Vmultiplexer___024root___eval_initial(Vmultiplexer___024root* vlSelf);
void Vmultiplexer___024root___eval_settle(Vmultiplexer___024root* vlSelf);
void Vmultiplexer___024root___eval(Vmultiplexer___024root* vlSelf);

void Vmultiplexer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultiplexer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultiplexer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmultiplexer___024root___eval_static(&(vlSymsp->TOP));
        Vmultiplexer___024root___eval_initial(&(vlSymsp->TOP));
        Vmultiplexer___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmultiplexer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmultiplexer::eventsPending() { return false; }

uint64_t Vmultiplexer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmultiplexer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmultiplexer___024root___eval_final(Vmultiplexer___024root* vlSelf);

VL_ATTR_COLD void Vmultiplexer::final() {
    Vmultiplexer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmultiplexer::hierName() const { return vlSymsp->name(); }
const char* Vmultiplexer::modelName() const { return "Vmultiplexer"; }
unsigned Vmultiplexer::threads() const { return 1; }
void Vmultiplexer::prepareClone() const { contextp()->prepareClone(); }
void Vmultiplexer::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmultiplexer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmultiplexer___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmultiplexer___024root__trace_init_top(Vmultiplexer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmultiplexer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplexer___024root*>(voidSelf);
    Vmultiplexer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmultiplexer___024root__trace_decl_types(tracep);
    Vmultiplexer___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vmultiplexer___024root__trace_register(Vmultiplexer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmultiplexer::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmultiplexer::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmultiplexer___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
