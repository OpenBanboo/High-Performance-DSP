`timescale 1ns / 1ps

module tb_FIR_parametric_1mul_1add;

parameter WIDTH = 16; 

	// Inputs
	reg [WIDTH-1:0] x;
	reg CLK;
	reg RST;

	// Outputs
	wire [WIDTH-1:0] y;

	//Real Number Presentation
	real real_x;
	real float_y;		//floating number results
	real real_h0;

// ================================Function Definition=======================================//
	function real fixedToFloat;
		input [63:0] in;
		input integer WI;
		input integer WF;
		integer idx;
		real retVal;
		begin
			retVal = 0;
			for (idx = 0; idx < WI+WF-1; idx = idx + 1) begin
				if(in[idx] == 1'b1) begin
					retVal = retVal + (2.0**(idx-WF));
				end
			end
		fixedToFloat = retVal - (in[WI+WF-1] * (2.0**(WI-1)));
		end
	endfunction

	// Instantiate the Unit Under Test (UUT)
	FIR_parametric_1mul_1add uut (
		.x(x), 
		.CLK(CLK), 
		.RST(RST), 
		.y(y), 
		.FIFO_error(FIFO_error)
	);

//===========================================================================================//
	// clock generator
	parameter ClockPeriod = 10;
	initial CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;
//===========================================================================================//	

//====================================Initialize Inputs======================================//
	parameter Testdada_Deph = 7; 
	parameter Testdata_Bits = 16;
	reg  [Testdata_Bits-1:0] Testdata_vec_FIR [Testdada_Deph-1:0]; //The vector of the testdata
	integer count;	
	
	initial begin 
		
		$readmemb("fpTestdata_FIR.txt", Testdata_vec_FIR);
		
		RST = 0; @(posedge CLK); RST = 1; @(posedge CLK)
		
		for (count=0; count<=Testdada_Deph; count=count+1) begin
			x = Testdata_vec_FIR[count];
			
			@(posedge CLK);
			if (count==Testdada_Deph)  begin
				@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);
				@(posedge CLK);@(posedge CLK);@(posedge CLK);@(posedge CLK);

				$finish;	
			end
		end
		
	end
	
	//====================================Floating Presentation===================================//
	reg [WIDTH-1:0] h0;
	initial h0 = 16'b0010101010101010;
	always @ * 	real_h0 = fixedToFloat(h0, 1, 15);
	always @ x 	real_x = fixedToFloat(x, 1, 15);
	always @ y 	float_y = fixedToFloat(y, 1, 15);
      
endmodule

