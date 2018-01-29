`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
module FIR_multicycle_326 
				#( parameter 
									TAPSIZE = 3, 		//The number of the taps of the FIR
									WI = 1,				//Input bitwidth for Integer part
									WF = 15)				//Input bitwidth for Fraction part
				 (
						 input signed [WI+WF-1:0] x,		 	//input x
						 input CLK, RST,						 	//clock and reset trigger 
																		//which is negative trigger
						 output reg signed [WI+WF-1:0] y 	//output y
						 //output reg signed [WI+WF-1:0] mul_out_show,
						 //output reg signed [WI+WF-1:0] add_out_show
				 );

// -- States definitions -- //
localparam 	state_0 = 3'b000;
localparam	state_1 = 3'b001;
//localparam	state_2 = 3'b010;


// -------Inner wires and registers ---- //
reg 	[1:0] current_state;			//keeps track of current state
reg 	[1:0] next_state;				//keeps track of current state
wire 	[WI+WF-1:0]   register;
reg 	[TAPSIZE-1:0] pointer;				
reg 	[WI+WF-1:0] h_tmp, x_tmp;		//multiplicand
reg 	[TAPSIZE-1:0] counter_shift;
reg 	[TAPSIZE-1:0] counter;
reg 	flag_virgin = 0;
wire 	[WI + WF - 1:0] mul_out, add_out;
wire 	RST_reg;
reg signed [WI+WF-1:0] mul_out_show;
reg signed [WI+WF-1:0] add_out_show;

// -- Memories of coefficients and input array -- //
reg [WI+WF-1:0] h_mem [TAPSIZE-1:0]; 	//The vector of the Coefficients
reg [WI+WF-1:0] x_mem [TAPSIZE-1:0]; 	//The vector of the Coefficients

assign RST_reg = (RST==0)?1'b0:(pointer==(TAPSIZE-1))?1'b0:1'b1;

always @ (posedge CLK) begin 
	
	if(!RST) begin								//negative reset
		current_state <= state_0;
		pointer <= 0;

		for (counter=0; counter < TAPSIZE; counter = counter + 1) begin
				x_mem[counter] <= 0;
		end
		x_mem[0] <= x;
		//RST_reg <= 1;
	end else begin
	
		case (current_state)
		
			state_0: begin

			// =====-----------------------------  Reset registers to 0 --------------------------====== //
				pointer <= 1;
			// =====-----------------------------------  Next State ------------------------------====== //
				current_state <= state_1;
			end
	
			state_1: begin
				
				//Conditional Operation 
						
				if (pointer == (TAPSIZE-1)) begin
					pointer <= 0; //If pointer approach the max value, set back to 0
				// ====-------------------------------  shift and put new value in   ------------------====== //
					for (counter_shift = (TAPSIZE-1); counter_shift >= 1; counter_shift = (counter_shift - 1) ) begin
						x_mem [counter_shift] <= x_mem [counter_shift-1] ;
					end
					x_mem [0] <= x;	
					//RST_reg <= 0;
					current_state <= state_1;
					y <= add_out;
				end else begin
					//RST_reg <= 1;
					pointer <= pointer + 1;
					current_state <= state_1;
				end
			end
	
		endcase
	end
end


// ==------------------------------------- Module Instiation ---------------------------== //
// Multiplier 
always @ * begin 							//set multiplicand
		h_tmp = h_mem [pointer];
		x_tmp = x_mem [pointer];
end
sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WI), .WF2(WF),  .WIO(WI), .WFO(WF)) mul_Fang		
		 (.CLK(CLK), .RST(RST), .in1(h_tmp), .in2(x_tmp), .out(mul_out) );
always @ * mul_out_show = mul_out;

// Adder 
fixpoint_adder #( .WI1(WI),  .WF1(WF),  .WI2(WI), .WF2(WF), .WIO(WI), .WFO(WF)) 
		 add_Fang ( .CLK(CLK),.RST(RST), .in1(mul_out), .in2(register), .out(add_out));

always @ * add_out_show = add_out;

// Register
register #(.N(WI+WF)) register_Fang ( .d(add_out), .CLK(CLK), .RST(RST_reg), .q(register) );	


endmodule
