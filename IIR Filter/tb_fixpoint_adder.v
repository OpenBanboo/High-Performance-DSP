`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Engineer:		Fang Lin
//
// Create Date:   19:22:07 10/30/2013
// Design Name:   fixpoint_adder
// Project Name:  Project1_fixedpoint
//
// Verilog Test Fixture created by ISE for module: fixpoint_adder
//
// Dependencies:
// 
// Revision:		2.0
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fixpoint_adder;

// Inputs
	reg CLK, RST;
	reg [8:0] in1;
	reg [9:0] in2; 		//Inputs of case 1


	// Outputs
	wire [10:0] out1;
	wire [12:0] out2;
	wire [16:0]  out3;
	wire [14:0] out4;
	
	//ovf
	wire OVF1,OVF2,OVF3,OVF4;
	
	//Real Number Presentation
	real in1_real, in2_real, out1_real, out2_real, out3_real, out4_real;
	real floatout1;		//floating number results

// ================================Function Definition==================================//
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
// ======================================================================================//

//====================================Initialization=====================================//

	// Instantiate the Unit Under Test (UUT) for Case 1
	// WIO=max(WI1+WI2), WFO=(WF1+WF2);
	fixpoint_adder 
			#(	.WI1(5), 		//length of the integer part, operand 1
				.WF1(4), 		//length of the fraction part, operand 1
				.WI2(7), 		//length of the integer part, operand 2
				.WF2(3),			//length of the fraction part, operand 2
				.WIO(7), 		//default length for the integer part of the required output
				.WFO(4))  Fang_utt_Case1 (.CLK(CLK), .RST(RST), .in1(in1), .in2(in2), .out(out1),.OVF(OVF1));
				
	// Instantiate the Unit Under Test (UUT) for Case 2
	// WIO=max(WI1+WI2)+1, WFO=(WF1+WF2)+1;
	fixpoint_adder 
			#(	.WI1(5), 		//length of the integer part, operand 1
				.WF1(4), 		//length of the fraction part, operand 1
				.WI2(7), 		//length of the integer part, operand 2
				.WF2(3),			//length of the fraction part, operand 2
				.WIO(8), 		//default length for the integer part of the required output
				.WFO(5))  Fang_utt_Case2 (.CLK(CLK), .RST(RST), .in1(in1), .in2(in2), .out(out2),.OVF(OVF2));
				
	// Instantiate the Unit Under Test (UUT) for Case 3
	// WIO<max(WI1+WI2), WFO<max(WF1+WF2);
	fixpoint_adder 
			#(	.WI1(5), 		//length of the integer part, operand 1
				.WF1(4), 		//length of the fraction part, operand 1
				.WI2(7), 		//length of the integer part, operand 2
				.WF2(3),			//length of the fraction part, operand 2
				.WIO(1), 		//default length for the integer part of the required output
				.WFO(15))  Fang_utt_Case3 (.CLK(CLK), .RST(RST), .in1(in1), .in2(in2), .out(out3),.OVF(OVF3));
				
	// Instantiate the Unit Under Test (UUT) for Case 4
	// WIO>max(WI1+WI2)+1, WFO>max(WF1+WF2)+1;
	fixpoint_adder 
			#(	.WI1(5), 		//length of the integer part, operand 1
				.WF1(4), 		//length of the fraction part, operand 1
				.WI2(7), 		//length of the integer part, operand 2
				.WF2(3),			//length of the fraction part, operand 2
				.WIO(9), 		//default length for the integer part of the required output
				.WFO(6))  Fang_utt_Case4 (.CLK(CLK), .RST(RST), .in1(in1), .in2(in2), .out(out4),.OVF(OVF4));
				
				
//=========================================================================================//
	// clock generator
	parameter ClockPeriod = 10;
	initial 	 CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;

//====================================Initialize Inputs====================================//
	parameter Testdada_Deph = 12; 
	parameter Testdata_Bits = 19;
	reg  [Testdata_Bits-1:0] Testdata_vec [Testdada_Deph-1:0]; //The vector of the testdata
	integer count;	
	
	initial begin 
		
		$readmemb("fpTestdata.txt", Testdata_vec);
		
		RST = 0; @(posedge CLK); RST = 1;
		
		for (count=0; count<=Testdada_Deph; count=count+1) begin
			{in1, in2} = Testdata_vec[count];

			if( out4_real == floatout1 )
				$display("The %d clock cycle's value is matched", count);
			else
				$display("The %d clock cycle's value is mismatched <=====", count);
			@(posedge CLK);
			if (count==Testdada_Deph)  $finish;	
		end
		
	end
//===================================Pesentation============================================// 
	always @ in1 in1_real = fixedToFloat(in1, 5, 4);
	always @ in2 in2_real = fixedToFloat(in2, 7, 3);
	
	always @ out1 out1_real = fixedToFloat(out1, 7, 4); //Transfer the fix-point output1 to float point for case 1
	always @ out2 out2_real = fixedToFloat(out2, 8, 5); //Transfer the fix-point output1 to float point for case 2
	always @ out3 out3_real = fixedToFloat(out3, 1, 15); //Transfer the fix-point output1 to float point for case 2
	always @ out4 out4_real = fixedToFloat(out4, 9, 6); //Transfer the fix-point output1 to float point for case 4
	
	always @ (in1_real or in2_real) floatout1 = in1_real + in2_real;
		
endmodule