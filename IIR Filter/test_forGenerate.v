`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:47:27 04/12/2014 
// Design Name: 
// Module Name:    test_forGenerate 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_forGenerate
 # (
		 parameter N = 8,
		 parameter NUMBER = 4,
		 parameter M = NUMBER + 1
	 )	
	( 
		 input  [7:0] din,
		 output [7:0] dout,
		 input  CLK, RST
    );

wire [N*M-1:0] d_q;

assign d_q[N-1:0] = din; 
assign dout = d_q[N*M-1:N*(M-1)];

genvar i;
generate 
for (i=1; i < M; i = i + 1) begin: i_loop
	register #(.N(N)) Fang_regist ( .d(d_q[(N*i-1):N*(i-1)]), 
											  .CLK(CLK), .RST(RST), 
											  .q(d_q[(N*(i+1)-1):N*i]));
end
endgenerate

endmodule
