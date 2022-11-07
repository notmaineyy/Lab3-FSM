module lfsr(
    input logic             clk,
    input logic             rst,
    input logic             en,
    output logic [3:0]      data_out   
);

reg [3:0] sreg=4'b1; // have to intialise as 1111 for lfsr to work, 0000 will not work

always_ff @ (posedge clk, posedge rst)
    if (en)
        begin
        sreg[3]<=sreg[2];
        sreg[2]<=sreg[1];
        sreg[1]<=sreg[0];
        sreg[0]<=sreg[3]^sreg[2];
        end

    assign data_out = sreg;
endmodule
