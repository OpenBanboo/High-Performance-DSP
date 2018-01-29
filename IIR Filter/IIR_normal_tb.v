`timescale 1ns / 1ps
`define NUMBER 4 				//number of sos
`define Testdata_Depth 50	//set the size of the testcases here
`define Testdata_Bits 16	//set the bitwidth of the testcases here
//`define WIDTH 16


module IIR_normal_tb;

	localparam WI = 5;
	localparam WF = 11;
	localparam WIO = 383;
	localparam WFO = 704;
	
	// Inputs
	reg [WI+WF-1:0] din;
	reg CLK;
	reg nReset;
	reg CE;

	// Outputs
	wire [(WIO+WFO-1):0] dout;
	wire [`NUMBER-1:0] OVF_f0;
	wire [`NUMBER-1:0] OVF_f1;
	wire [`NUMBER-1:0] OVF_b0;
	wire [`NUMBER-1:0] OVF_b1;

	//Real Number Presentation
	real real_din;
	real real_dout;		//floating number results

	// Instantiate the Unit Under Test (UUT)
	IIR_normal uut (
		.din(din), 
		.CLK(CLK), 
		.nReset(nReset), 
		.CE(CE), 
		.dout(dout), 
		.OVF_f0(OVF_f0), 
		.OVF_f1(OVF_f1), 
		.OVF_b0(OVF_b0), 
		.OVF_b1(OVF_b1)
	);

	// Memory used to store the testcases
	reg [`Testdata_Bits-1:0] Testdata_vec_IIR [`Testdata_Depth-1:0];
	//reg [`WI+`WF-1:0] scale_mem [`NUMBER-1:0]; 				//The vector of the Coefficients of scaling

// ================================  Function Definition  =======================================//
	// Present the fixed point number into real number
	function real fixedToFloat;
		input [2047:0] in;	//should cover every bit of the maximal value
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
//==================================================================================================//

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//

//===========================================  Inpulse =============================================//
	integer count;


	initial begin
		$readmemb("fpTestdata_IIR.txt", Testdata_vec_IIR);
		$readmemb("coef_a_s1.txt", IIR_normal_tb.uut.sos_Fang_1.a_mem);
		$readmemb("coef_b_s1.txt", IIR_normal_tb.uut.sos_Fang_1.b_mem);

		$readmemb("coef_a_s2.txt", IIR_normal_tb.uut.sos_Fang_2.a_mem);
		$readmemb("coef_b_s2.txt", IIR_normal_tb.uut.sos_Fang_2.b_mem);

		$readmemb("coef_a_s3.txt", IIR_normal_tb.uut.sos_Fang_3.a_mem);
		$readmemb("coef_b_s3.txt", IIR_normal_tb.uut.sos_Fang_3.b_mem);

		$readmemb("coef_a_s4.txt", IIR_normal_tb.uut.sos_Fang_4.a_mem);
		$readmemb("coef_b_s4.txt", IIR_normal_tb.uut.sos_Fang_4.b_mem);	

		$readmemb("scale_fac.txt", IIR_normal_tb.uut.scale_mem);

		//present the coeffieicnts of "a" and "b"
		/*$display("coefficients of the 1st sos");
		$display("a0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[1].sos_Fang.b_mem[2], `WI, `WF));
		
		$display("coefficients of the 2nd sos");
		$display("a0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[2].sos_Fang.b_mem[2], `WI, `WF));
		
		$display("coefficients of the 3rd sos");
		$display("a0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[3].sos_Fang.b_mem[2], `WI, `WF));

		$display("coefficients of the 4th sos");
		$display("a0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_normal_tb.uut.SOS[4].sos_Fang.b_mem[2], `WI, `WF));

		$display("scale1: %f", fixedToFloat(IIR_normal_tb.uut.scale_mem[0], `WI, `WF));
		$display("scale2: %f", fixedToFloat(IIR_normal_tb.uut.scale_mem[1], `WI, `WF));		
		$display("scale3: %f", fixedToFloat(IIR_normal_tb.uut.scale_mem[2], `WI, `WF));
		$display("scale4: %f", fixedToFloat(IIR_normal_tb.uut.scale_mem[3], `WI, `WF));
		*/
		// Initialize Inputs
		din = 0; nReset = 0; CE = 1; 
		
		@(posedge CLK); nReset = 1; 

		for (count = 0; count <= `Testdata_Depth; count = count+1) begin
				din = Testdata_vec_IIR[count]; @(posedge CLK);
				if (count==`Testdata_Depth)
					$finish;
		end

	end
	
//===================================  Real Pesentation  ============================================// 
	
//===================================  Real Pesentation  ============================================// 
	// -- input
	always @ din real_din = fixedToFloat(din, WI, WF);      
		
	// -- Output
	always @ dout real_dout = fixedToFloat(dout, WIO, WFO);


endmodule
