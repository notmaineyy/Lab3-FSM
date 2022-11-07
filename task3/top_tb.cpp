#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int i;
  int clk;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop * top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T3:Tick+F1");
  //vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->en = 1;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (i=0; i<1500;i++){

        //dump variables into VCD file and toggle clock
        for (clk=0;clk<2;clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        // output on vbuddy
        vbdBar(top->out & 0xFF);
        vbdCycle(i);

        top->rst=(i<2);
        top->N=vbdValue();

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
