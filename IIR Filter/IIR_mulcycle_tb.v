`timescale 500ps / 1ps
`define Testdata_Depth 50
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:39:04 04/16/2014
// Design Name:   IIR_mulcycle
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/IIR_mulcycle_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IIR_mulcycle
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IIR_mulcycle_tb;

parameter NUMBER  = 4, 		//The number of sos in the IIR,
			 TAPSIZE = 3,
			 WI = 5,				//Input bitwidth for Integer part
			 WF = 11,			//Input bitwidth for Fraction part
			 WIO = 23,			//Required integer bits of the output
			 WFO = 44,
			 WIS = 5,
			 WFS = 11;

localparam intL = WIO;					//integer length of correct results
localparam frcL = WFO;					//fraction length of correct results
			 
	// Inputs
	reg [WI+WF-1:0] din;
//	reg [WI+WF-1:0] fac_scale;
	reg CLK;
	reg nReset;
	reg we;
	reg CE;
	
	// Outputs
	wire [WIO+WFO-1:0] dout;
	wire OVF_f0;
	wire OVF_f1;
	wire OVF_b0;
	wire OVF_b1;

	// Instantiate the Unit Under Test (UUT)
	IIR_mulcycle 
		#(
			.NUMBER(NUMBER),
			.TAPSIZE(TAPSIZE),
			.WI(WI),
			.WF(WF),
			.WIO(WIO),
			.WFO(WFO),
			.WIS(WIS),
			.WFS(WFS)
		)
	uut (
		.din(din), 
		.CE(CE),
		.CLK(CLK), 
		.nReset(nReset), 
		.we(we), 
		.dout(dout), 
		.OVF_f0(OVF_f0), 
		.OVF_f1(OVF_f1), 
		.OVF_b0(OVF_b0), 
		.OVF_b1(OVF_b1)
	);
	
	// Memory used to store the testcases
	reg [WI+WF-1:0] Testdata_vec_IIR [`Testdata_Depth-1:0];
	
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
	initial 	 CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//
//===========================================  Inpulse =============================================//
	integer count;
	integer count_delay;
	integer file;
	
	initial begin
		$readmemb("fpTestdata_IIR.txt", Testdata_vec_IIR);
		$readmemb("coef_mulcycle.txt", IIR_mulcycle_tb.uut.coef_mem);
		$readmemb("scale_fac.txt", IIR_mulcycle_tb.uut.scale_mem);

		//present the coeffieicnts of "a" and "b"
		$display("coefficients of the 1st sos");
		$display("a0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[3], WI, WF));
		$display("a1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[4], WI, WF));
		$display("a2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[5], WI, WF));

		$display("b0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[0], WI, WF));
		$display("b1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[1], WI, WF));
		$display("b2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[2], WI, WF));
		
		$display("coefficients of the 2nd sos");
		$display("a0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[9], WI, WF));
		$display("a1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[10], WI, WF));
		$display("a2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[11], WI, WF));

		$display("b0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[6], WI, WF));
		$display("b1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[7], WI, WF));
		$display("b2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[8], WI, WF));
		
		$display("coefficients of the 3rd sos");
		$display("a0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[15], WI, WF));
		$display("a1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[16], WI, WF));
		$display("a2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[17], WI, WF));

		$display("b0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[12], WI, WF));
		$display("b1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[13], WI, WF));
		$display("b2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[14], WI, WF));

		$display("coefficients of the 4th sos");
		$display("a0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[21], WI, WF));
		$display("a1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[22], WI, WF));
		$display("a2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[23], WI, WF));

		$display("b0: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[18], WI, WF));
		$display("b1: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[19], WI, WF));
		$display("b2: %f", fixedToFloat(IIR_mulcycle_tb.uut.coef_mem[20], WI, WF));

		$display("scale1: %f", fixedToFloat(IIR_mulcycle_tb.uut.scale_mem[0], WI, WF));
		$display("scale2: %f", fixedToFloat(IIR_mulcycle_tb.uut.scale_mem[1], WI, WF));		
		$display("scale3: %f", fixedToFloat(IIR_mulcycle_tb.uut.scale_mem[2], WI, WF));
		$display("scale4: %f", fixedToFloat(IIR_mulcycle_tb.uut.scale_mem[3], WI, WF));
		$display("scale5: %f", fixedToFloat(IIR_mulcycle_tb.uut.scale_mem[4], WI, WF));
//==================================================================================================//
		
		// Initialize Inputs
		nReset = 0;
		din = 0;  CE = 1; 
		we = 0; 

		@(posedge CLK); @(posedge CLK); nReset = 1; we = 1;  
		for (count = 0; count < `Testdata_Depth; count = count+1) begin
				din = Testdata_vec_IIR[count]; 
				for(count_delay = 0; count_delay < 4; count_delay = count_delay + 1)
					@(posedge CLK);
				if (count==`Testdata_Depth-1)
					$finish;
		end

		file = $fopen("Result_timemux.txt","w");
		$fmonitor(file, "%b", dout);

	end

//==================================================================================================//
	real real_din_tb, real_din, real_din_delay, real_din_norm, real_mux_out, real_dout;
	real real_x1, real_x2, real_xb0, real_x1b1, real_x2b2, real_x1b1x2b2, real_xb0x1b1x2b2; 
	real real_y, real_y1, real_y2, real_y1_ma1, real_y2_ma2, real_y2_ma2_y1_ma1;
	real real_tmp_scaled, real_dout_tmp,real_tmp_result;
//==================================================================================================//
//===================================  Real Pesentation  ============================================// 
	// -- input -- //
	always @ din real_din_tb = fixedToFloat(IIR_mulcycle_tb.din, WI, WF);
	always @ IIR_mulcycle_tb.uut.din real_din = fixedToFloat(IIR_mulcycle_tb.uut.din, WI, WF);
	always @ IIR_mulcycle_tb.uut.din_delay real_din_delay = fixedToFloat(IIR_mulcycle_tb.uut.din_delay, WI, WF);
	always @ IIR_mulcycle_tb.uut.din_norm real_din_norm = fixedToFloat(IIR_mulcycle_tb.uut.din_norm, intL, frcL);
	always @ IIR_mulcycle_tb.uut.mux_out real_mux_out = fixedToFloat(IIR_mulcycle_tb.uut.mux_out, intL, frcL);	
	// -- Forward part -- //
	always @ IIR_mulcycle_tb.uut.x1 real_x1 = fixedToFloat(IIR_mulcycle_tb.uut.x1, intL, frcL);
	always @ IIR_mulcycle_tb.uut.x2 real_x2 = fixedToFloat(IIR_mulcycle_tb.uut.x2, intL, frcL);
	always @ IIR_mulcycle_tb.uut.xb0 real_xb0 = fixedToFloat(IIR_mulcycle_tb.uut.xb0, intL+WIS, frcL+WFS);
	always @ IIR_mulcycle_tb.uut.x1b1 real_x1b1 = fixedToFloat(IIR_mulcycle_tb.uut.x1b1, intL+WIS, frcL+WFS);
	always @ IIR_mulcycle_tb.uut.x2b2 real_x2b2 = fixedToFloat(IIR_mulcycle_tb.uut.x2b2,intL+WIS, frcL+WFS);
	always @ IIR_mulcycle_tb.uut.x1b1x2b2 real_x1b1x2b2 = fixedToFloat(IIR_mulcycle_tb.uut.x1b1x2b2, intL+WIS+1, frcL+WFS);
	always @ IIR_mulcycle_tb.uut.xb0x1b1x2b2 real_xb0x1b1x2b2 = fixedToFloat(IIR_mulcycle_tb.uut.xb0x1b1x2b2, intL+WIS+2, frcL+WFS);	
	// -- Backward part -- //
	always @ IIR_mulcycle_tb.uut.y real_y = fixedToFloat(IIR_mulcycle_tb.uut.y, intL+WIS+3, frcL+WFS);	
	always @ IIR_mulcycle_tb.uut.y1 real_y1 = fixedToFloat(IIR_mulcycle_tb.uut.y1, intL+WIS*2+3, frcL+WFS*2);		
	always @ IIR_mulcycle_tb.uut.y2 real_y2 = fixedToFloat(IIR_mulcycle_tb.uut.y2, intL+WIS*2+3, frcL+WFS*2);
	always @ IIR_mulcycle_tb.uut.y1_ma1 real_y1_ma1 = fixedToFloat(IIR_mulcycle_tb.uut.y1_ma1, intL+WIS*3+3, frcL+WFS*3);
	always @ IIR_mulcycle_tb.uut.y2_ma2 real_y2_ma2 = fixedToFloat(IIR_mulcycle_tb.uut.y2_ma2, intL+WIS*3+3, frcL+WFS*3);
	always @ IIR_mulcycle_tb.uut.y2_ma2_y1_ma1 real_y2_ma2_y1_ma1 = fixedToFloat(IIR_mulcycle_tb.uut.y2_ma2_y1_ma1, intL+WIS*3+4, frcL+WFS*3);
	// -- Scaled output -- /
	always @ IIR_mulcycle_tb.uut.tmp_scaled real_tmp_scaled = fixedToFloat(IIR_mulcycle_tb.uut.tmp_scaled, intL+WIS*3+3, frcL+WFS*3);
	
	// -- Output -- //
	always @ IIR_mulcycle_tb.uut.dout_tmp real_dout_tmp = fixedToFloat(IIR_mulcycle_tb.uut.dout_tmp, WIO, WFO);
	always @ IIR_mulcycle_tb.uut.tmp_result real_tmp_result = fixedToFloat(IIR_mulcycle_tb.uut.tmp_result, WIO, WFO);
	always @ IIR_mulcycle_tb.uut.dout real_dout = fixedToFloat(IIR_mulcycle_tb.uut.dout, WIO, WFO);
      
endmodule

