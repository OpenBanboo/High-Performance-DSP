`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////

module tb_FIR_N_multicycle;

	parameter WIDTH = 16; 

	// Inputs
	reg [WIDTH-1:0] x;
	reg CLK;
	reg RST;

	// Outputs
	wire [WIDTH-1:0] y, add_out_show, mul_out_show;
	
	//Real Number Presentation
	real real_x, add_float, mul_float;
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
// ========================================================================================//
	
	
	// Instantiate the Unit Under Test (UUT)
	FIR_N_multicycle uut (
		.x(x), 
		.CLK(CLK), 
		.RST(RST), 
		.y(y), 
		.mul_out_show(mul_out_show), 
		.add_out_show(add_out_show)
	);

// ===========================================================================================//
	// clock generator
	parameter ClockPeriod = 10;
	initial CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;
//===========================================================================================//	
     
//====================================Initialize Inputs======================================//
	parameter Testdada_Deph = 7; 
	parameter Testdata_Bits = 16;
	parameter Testdata_h_Deph = 3;
	reg  [Testdata_Bits-1:0] Testdata_vec_FIR [Testdada_Deph-1:0]; //The vector of the testdata
	integer count;	
	reg flag_virgin = 0;
	initial begin 
		
		$readmemb("fpTestdata_FIR.txt", Testdata_vec_FIR);
		
		RST = 0; #2;
		RST = 1; 
		
		for (count=0; count<=Testdada_Deph; count=count+1) begin
			x = Testdata_vec_FIR[count];
			
			if (flag_virgin==0) begin
				@(posedge CLK);@(posedge CLK); @(posedge CLK); #9; flag_virgin = 1;
			end else begin
				@(posedge CLK);@(posedge CLK);#9;
			end
			
			if (count==Testdada_Deph)  begin
				@(posedge CLK); @(posedge CLK); @(posedge CLK);
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
	always @ add_out_show 	add_float = fixedToFloat(add_out_show, 1, 15);
	always @ mul_out_show 	mul_float = fixedToFloat(mul_out_show, 1, 15);
endmodule
