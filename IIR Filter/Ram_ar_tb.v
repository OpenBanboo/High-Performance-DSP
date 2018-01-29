`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:33:17 04/16/2014
// Design Name:   RAM_ar
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/Ram_ar_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM_ar
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ram_ar_tb;
	localparam addWidth = 3;
	localparam dataWidth = 6;
	// Inputs
	reg CLK, RST;
	reg we;
	reg [addWidth-1:0] addr;
	reg [dataWidth-1:0] din;

	// Outputs
	wire [dataWidth-1:0] dout;

	// Instantiate the Unit Under Test (UUT)
	RAM_ar uut (
		.CLK(CLK), 
		.RST(RST),
		.we(we), 
		.addr(addr), 
		.din(din), 
		.dout(dout)
	);

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//
	
	integer i = 0;
	initial begin
		// Initialize Inputs
		RST = 0; @(posedge CLK); RST =1;
		we = 1;
		addr = i;
		din = i; 
		@(posedge CLK); i = i+1; addr = i; din = i;
		@(posedge CLK); i = i+1; addr = i; din = i;
		@(posedge CLK); i = i+1; addr = i; din = i;
		@(posedge CLK); i = i+1; addr = i; din = i;
		@(posedge CLK); i = i+1; addr = i; din = i;
		@(posedge CLK); i = i+1; addr = i; din = i;
		// Wait 100 ns for global reset to finish
		#10; $finish;
        
		// Add stimulus here

	end
      
endmodule

