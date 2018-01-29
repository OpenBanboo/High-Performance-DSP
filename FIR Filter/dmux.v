`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:41 03/22/2014 
// Design Name: 
// Module Name:    dmux 
//
//////////////////////////////////////////////////////////////////////////////////
module dmux_1to2 
				#(parameter N = 16)
				 (input [N-1: 0] in,
				  input sel, 
				  output reg [N-1: 0] A, B  
				 );

always @ * begin
	
	if (sel) begin
		B <= in;
		A <= 0;
	end else begin
		B <= 0;
		A <= in;
	end
	
end


endmodule
