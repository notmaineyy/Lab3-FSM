module top #(
    parameter   WIDTH = 16,
                D_WIDTH = 8
)(
    // interface signals
    input   logic                       clk,        // clock
    input   logic                       rst,        // reset
    input   logic                       en,         // enable
    input   logic [WIDTH-1:0]           N,       
    output  logic [D_WIDTH-1:0]         out        // output data
    
);

logic cnt;    // interconnect wire

clktick clkTick(
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (cnt)
);

f1_fsm stateMachine(
    .en (cnt),
    .rst (rst),
    .clk (clk),
    .out (out)
);

endmodule
