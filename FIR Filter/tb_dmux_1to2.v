`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:03:50 03/22/2014
// Design Name:   dmux_1to2
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW5/tb_dmux_1to2.v
// Project Name:  HW5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dmux_1to2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_dmux_1to2;

	// Inputs
	reg [15:0] in;
	reg sel;

	// Outputs
	wire [15:0] A;
	wire [15:0] B;

	// Instantiate the Unit Under Test (UUT)
	dmux_1to2 uut (
		.in(in), 
		.sel(sel), 
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		in = 15;
		sel = 0;
		#10; sel = 1; #10; $finish;
		// Wait 100 ns for global reset to finish

        
		// Add stimulus here

	end
      
endmodule

