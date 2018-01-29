`timescale 1000ns / 100ps
`define X_trc ((WIO>=2)? (WIO-2+frcL) : frcL)
//////////////////////////////////////////////////////////////////////////////////

// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module fixpoint_adder
		   # (parameter 
					 WI1 = 4,		 		//length of the integer part, operand 1
					 WF1 = 3, 				//length of the fraction part, operand 1
					 WI2 = 6, 				//length of the integer part, operand 2
					 WF2 = 5, 				//length of the fraction part, operand 2
					 WIO = 1, 		
					 WFO = 15	
					 )
	(input CLK, RST, input signed [WI1+WF1-1 : 0] in1, input signed [WI2+WF2-1 : 0] in2, 
						  output reg signed [WIO+WFO-1 : 0] out, output reg OVF);
	
localparam intL = ((WI1>=WI2)?WI1:WI2);				//integer length of correct results
localparam frcL = ((WF1>=WF2)?WF1:WF2);				//fraction length of correct results

reg signed [intL+frcL-1 : 0] tmp;					//The output with correct number of bits
reg [WIO-1 : 0] outI;									//The integer part of the output
reg [WFO-1 : 0] outF;

reg signed [intL+frcL-1 : 0]  o1, o2;				//variable that could be execute in behavioral module

always @ * begin											
	if (WI1>=WI2) 	begin									//Situation1 WI1>=WI2 WF1>=WF2
		if (WF1>=WF2) begin
			o1 = in1;
			o2 = { {(WI1-WI2){in2[WI2+WF2-1]}}, in2, {(WF1-WF2){1'b0}} };
		end
		else begin											//Situation2 WI1>=WI2 WF1<WF2
			o1 = { in1,  {(WF2-WF1){1'b0}} };
			o2 = { {(WI1-WI2){in2[WI2+WF2-1]}}, in2};
		end
	end
	else begin
		if (WF1>=WF2) begin								//Situation3 WI1<WI2 WF1>=WF2
			o1 = { {(WI2-WI1){in1[WI1+WF1-1]}}, in1 };
			o2 = { in2, {(WF1-WF2){1'b0}} };
		end
		else begin											//Situation4 WI1<WI2 WF1<WF2
			o2 = in2;
			o1 = { {(WI2-WI1){in1[WI1+WF1-1]}}, in1, {(WF2-WF1){1'b0}} };
		end
	end	
end

always @* tmp = o1 + o2;

//--------------------adjusting the bitwidth for the fractional part----------------------------------------------------------
always  @* begin
	if (WFO >= frcL)										//append 0s to the lsb bits
			outF = {tmp[frcL-1:0] , {(WFO-frcL){1'b0}}};
	else														//WFO<(WF1+WF2): Truncate bits from the LSB bits
			outF = tmp[frcL-1 : frcL-WFO];
end
//--------------------adjusting the bitwidth for the integer part-------------------------------------------------------------

always @* begin
	if (WIO>=intL)											//sign extend the integer part
			if (OVF==0)
				outI = {{(WIO-intL){tmp[intL+frcL-1]}}, tmp[intL+frcL-1:frcL]};
			else
				outI = {{(WIO-intL){~tmp[intL+frcL-1]}}, tmp[intL+frcL-1:frcL]};
	else	begin									//WIO<(WI1+WI2)
		if (WIO==1)
			outI = tmp[intL+frcL-1];
		else
			//outI = `X_trc;
		   outI = {tmp[intL+frcL-1], tmp[`X_trc:frcL]};
			//outI = { tmp[intL+frcL-1], tmp[WIO-2+frcL:frcL]}; 	//truncate bits from the MSB part but keep the sign bit	
	end
end

//--------------------registering the output----------------------------------------------------------------------------------
always @ * 	begin												//(posedge CLK)
	if (!RST) 
		out <= 0;
	else 
		out <= {outI [WIO-1:0], outF [WFO-1:0]};
end
//--------------------Overflow Detection--------------------------------------------------------------------------------------
always @* begin
	if(in1[WI1+WF1-1]==in2[WI2+WF2-1])
		OVF = in1[WI1+WF1-1]^tmp[intL+frcL-1];
	else
		OVF = 0;
end

endmodule
