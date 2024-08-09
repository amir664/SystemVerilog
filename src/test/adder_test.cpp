#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vencoder.h"

vluint64_t sim_time = 0;

void tick(Vencoder* dut) {
    dut->clk = !dut->clk;
    dut->eval();
    sim_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vencoder* dut = new Vencoder;

    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); 
    m_trace->open("encoder.vcd");
    //
    dut->clk = 0;
    dut->reset = 0;
    //dut->enable = 0;

    dut->eval();
    m_trace->dump(sim_time++); 

    dut->reset = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    //
    dut->in1= 0;
    dut->in2= 0;
    dut->in3= 0;
    dut->in4= 1;
    //dut->b = 2;
    
    for (int i = 0; i < 20; i++) {
        tick(dut); // Toggle clock
        // if (dut->clk) {
        //     std::cout << "Time: " << sim_time << "\nRandom Number: " << dut->number << std::endl;
        // }
        m_trace->dump(sim_time++);
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}