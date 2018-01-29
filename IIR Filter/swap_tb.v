`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:53:35 04/25/2014
// Design Name:   swap
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/swap_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: swap
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module swap_tb;

	// Inputs
	reg CLK;
	reg RST;
	reg [31:0] OP1;
	reg [31:0] OP2;

	// Outputs
	wire [31:0] OP_L;
	wire [31:0] OP_S;
	wire meq;
	wire eqn;

	// Instantiate the Unit Under Test (UUT)
	swap uut (
		.CLK(CLK), 
		.RST(RST), 
		.OP1(OP1), 
		.OP2(OP2), 
		.OP_L(OP_L), 
		.OP_S(OP_S), 
		.meq(meq), 
		.eqn(eqn)
	);

	initial begin
		// Initialize Inputs
		RST = 0; #5;
		
		RST = 1; OP1 = 32'b0_00000010_00000000000000000010000;
					OP2 = 32'b0_00010000_00000000000000000000100; #5; //The exponent part of the op2 is larger
																			
		OP1 = 32'b0_00100000_00000000000000000010000;
		OP2 = 32'b0_00000100_00000000000000000000100; #5; 			 //The exponent part of the op1 is larger
		
		OP1 = 32'b0_00000100_00000000000000000010000;					 //The exponent are the same
		OP2 = 32'b0_00000100_00000000000000000000100; #5; 			 //The mantissa of OP1 is larger

		OP1 = 32'b0_00000100_00000000000000000010000;					 //The exponent are the same
		OP2 = 32'b0_00000100_00000000000000001000000; #5; 			 //The mantissa of OP2 is larger
		
		OP1 = 32'b0_00000100_00000000000000000010000;					 //They are the same
		OP2 = 32'b0_00000100_00000000000000000010000; #5; 			 

		OP1 = 32'b0_00000100_00000000000000000010000;					 //They are negative to each other
		OP2 = 32'b1_00000100_00000000000000000010000; #5; 			 

		// Wait 100 ns for global reset to finish
		#10; $finish;
        
		// Add stimulus here

	end

always #5 begin
	$display("New cases comes");
   $display("OP1: %b", OP1); $display("OP2: %b", OP2);
	if (eqn) 	$display("OP1 = -OP2");
	else if (meq) $display("OP1 = OP2");
	else if (OP1 == OP_L) $display("OP1 is larger");
	else if (OP2 == OP_L) $display("OP2 is larger");
	else $display("error");
end
      
endmodule

