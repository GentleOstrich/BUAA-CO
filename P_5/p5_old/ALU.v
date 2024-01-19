`include "defines.v"

module ALU(
    input [3:0] ALUop,
    input [31:0] A,
    input [31:0] B,
    output reg [31:0] AO
);
	reg [31:0] temp;
	reg [31:0] count;
	integer i;
	
	reg o;
    always @(*) begin
        case(ALUop) 
			`ADDop: AO = A + B;
            `SUBop: AO = A - B;
            `ORop: AO = A | B; 
			
			`CMCOop : begin
				temp = 0;
				count = 0;
				for (i = 0; i < 32; i = i + 1) begin
					if (A[i] == 1'b1) begin
						count = count + 1;
						if (count > temp) begin
							temp = count;
						end
					end else begin
						count = 0;
					end
				end
				AO = temp;
			end
			
			`RSONop: begin
				o = ^A;
				if (o == 1) begin
					AO = 1;
				end else begin
					AO = 0;
				end
			end
			
        endcase
    end
endmodule
