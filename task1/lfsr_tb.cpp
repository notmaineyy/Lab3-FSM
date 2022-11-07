#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"

#include "vbuddy.cpp"     // include vbuddy code

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc,argv);
    // init top verilog instance
    Vlfsr* top = new Vlfsr;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T1: LFSR");
    vbdSetMode(1);        // Flag mode set to one-shot

    //initialize simualation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;

    //run simulation for many clock cycles
    for (i=0; i<500;i++){

        //dump variables into VCD file and toggle clock
        for (clk=0;clk<2;clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        // output on vbuddy
        vbdHex(1, top->data_out & 0xF);
        vbdBar(top->data_out & 0xFF);
        vbdCycle(i);

        top->en=vbdFlag();

    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);    
    }
    vbdClose();
    tfp->close();
    exit(0);
}
