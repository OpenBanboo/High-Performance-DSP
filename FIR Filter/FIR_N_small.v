`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
module FIR_N_small #( parameter 
							 TAPSIZE = 3, 	//The number of the taps of the FIR
							 WI = 1,			//Input bitwidth for Integer part
							 WF = 15)		//Input bitwidth for Fraction part
(
						 input signed [WI+WF-1:0] x,			//input x
						 input CLK, RST,							//clock and reset trigger 
																		//which is negative trigger
						 output reg signed [WI+WF-1:0] y,	//output y
						 output reg signed [WI+WF-1:0] mul_out_show,
						 output reg signed [WI+WF-1:0] add_out_show
					  );

//Inner wire
wire signed [WI+WF-1:0] p0, p1, p2, p3, p4, p5;	
wire OVF1, OVF2;
wire [WI+WF-1:0] d, q;
wire [WI+WF-1:0] mul_out;
reg  [TAPSIZE-1:0] pointer;
reg   RST_reg;


	
reg  [WI+WF-1:0] Coef_mem [TAPSIZE-1:0]; 		//The vector of the Coefficients
initial begin
	$readmemb("Coef.txt", Coef_mem);				//Load the Coefficients vector
end

reg [WI+WF-1:0] x_mem [TAPSIZE-1:0]; 			//The vector of the Coefficients

integer counter = 0;	
reg sym_0;									
always @ (posedge CLK or negedge RST) begin
	if (~RST) begin
		for (counter=0; counter < TAPSIZE; counter = counter + 1) begin
			x_mem[counter] = 0;
		end
		pointer = 0;
		//counter_CLK_3 = 'hz;
	end
end

//Control part
reg CLK_3;
integer counter_CLK_3 = 0;
integer counter_CLK_3_tmp = 0;
always @ (posedge CLK) begin
	//for (counter_CLK_3 = 0; counter_CLK_3 < TAPSIZE; counter_CLK_3 = counter_CLK_3 + 1) //begin
	//	 @(posedge CLK);
	//end

	if ( counter_CLK_3_tmp == TAPSIZE-1 ) begin
		 counter_CLK_3_tmp <= 0;
	end else begin
		 counter_CLK_3_tmp <= counter_CLK_3_tmp + 1;
	end
	
	if ( counter_CLK_3 == TAPSIZE-1 ) begin
		 CLK_3 <= 1;	//set the flag to symbol the third clock cycle
	end else begin
		 CLK_3 <= 0;
	end
	
		counter_CLK_3 <= counter_CLK_3_tmp; 
end

integer counter_xin = 0;
integer counter_shift = 0;
always @ (x or CLK_3) begin

		if (counter_xin==0) begin	//The first value comes
				x_mem [0] = x;
				counter_xin = counter_xin + 1;
		end else if (CLK_3) begin	//Later values comes: Shift first and put new value in
			for (counter_shift = (TAPSIZE-1); counter_shift >= 1; counter_shift = counter_shift - 1 ) begin
				x_mem [counter_shift] = x_mem [counter_shift-1] ;
			end

			x_mem [0] = x;
			counter_xin = counter_xin + 1;
		end

end
	
// Multiplicaiton Pointer
reg pointer_reg = 0;
always @(posedge CLK) begin
	if (pointer_reg==0) begin
		pointer <= 0;
		pointer_reg <= 1;
	end else if (pointer == TAPSIZE-1)	//If it is pointing the maixmum value
		pointer <= 0;							//reset pointer to 0
		
	else
		pointer <= pointer + 1;
end 

// Feching out values from two memories
reg [WI + WF -1 : 0 ] h_tmp, x_tmp;		//multiplicand
always @ * begin
		h_tmp = Coef_mem [pointer];
		x_tmp = x_mem [pointer];
end

// Multiplier 
sMult #(.WI1(1), 	 .WF1(15),  .WI2(1), .WF2(15),  .WIO(1), .WFO(15)) mul_Fang		
		 (.CLK(CLK), .RST(RST), .in1(h_tmp), .in2(x_tmp), .out(mul_out) );
always @ * mul_out_show = mul_out;
// Adder 

fixpoint_adder #( .WI1(1),  .WF1(15),  .WI2(1), .WF2(15), .WIO(1), .WFO(15)) 
		 add_Fang ( .CLK(CLK),.RST(RST), .in1(mul_out), .in2(q), .out(d));
always @ * add_out_show = d;

// Register
register #(.N(16)) register_Fang ( .d(d), .CLK(CLK), .RST(RST_reg), .q(q) );	
always @ (RST or pointer) begin
	if (!RST)
		RST_reg = RST;
	if (RST&&(pointer==2))
		RST_reg = 1'b0;
	else if (RST&&(pointer==0))
		RST_reg = 1'b1;
end
always @* y = d;

endmodule