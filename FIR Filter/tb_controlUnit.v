`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////

module tb_controlUnit;

	// Inputs
	reg RST,CLK;

	// Outputs
	wire sel_d1;
	wire sel_d2;
	wire sel_m1;
	wire sel_m2;
	wire FIFO_read;
	wire FIFO_write;
	wire [2:0] nextState;

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.RST(RST), 
		.CLK(CLK),
		.sel_d1(sel_d1), 
		.sel_d2(sel_d2), 
		.sel_m1(sel_m1), 
		.sel_m2(sel_m2), 
		.FIFO_read(FIFO_read), 
		.FIFO_write(FIFO_write), 
		.nextState(nextState)
	);

//===========================================================================================//
	// clock generator
	parameter ClockPeriod = 10;
	initial CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;
//===========================================================================================//	
	

	initial begin
		// Initialize Inputs
		RST = 0; @(posedge CLK); RST = 1;
		@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
		@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
		@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
		@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
		@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
		// Wait 100 ns for global reset to finish
      $finish;
		// Add stimulus here

	end
      
endmodule

