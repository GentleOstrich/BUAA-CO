module alu(
    input  [31:0] A,
    input  [31:0] B,
    input  [4:0]  Shamt,
    input  [3:0]  ALUOp,
    output        Equal,
	output        Nez,
	output        LEZ,
    output /*reg*/ [31:0] C
    );


    parameter ADDop = 4'b0000;
    parameter SUBop = 4'b0001;
    parameter ORop  = 4'b0010;
    parameter SLLop = 4'b0011;
	parameter RLBop = 4'b0100;
	parameter GRAYop = 4'b0101;
	parameter SSZEop = 4'b0110;
	parameter SRLVop = 4'b0111;
	parameter SLTop  = 4'b1000;
	
    assign Equal = (A == B);
	assign Nez   = (A != 32'd0);
	assign LEZ   = ($signed(A) <= 0) ? 1 : 0;
	integer i;
	
	
	reg [31:0] t;
	reg [5:0] A0;
	reg [5:0] B0;
	reg [31:0] ans;
	integer j;
	integer k;
	always @(*) begin
		A0 = 0;
		B0 = 0;
		for (j = 0; j < 32 && A[j] == 1'b0; j = j + 1) begin
			A0 = A0 + 1'b1;
		end
		for (j = 0; j < 32 && B[j] == 1'b0; j = j + 1) begin
			B0 = B0 + 1'b1;
		end
		if (A0 == B0) begin
			ans = 1;
		end else begin
			ans = A - B;
		end
	end
	
	
	always @(*) begin
		t = 0;
		for (i = 0; i < B && ALUOp == RLBop; i = i + 1) begin
				t[i] = !A[i];
		end
		for (i=B;i<32;i=i+1) begin
				t[i] = A[i];
		end
	end
	wire [4:0] s;
	assign s = A[4:0];
	
	wire [31:0] sltans;
	assign sltans = ($signed(A) < $signed(B)) ? 1 : 0;
	
	assign C = 	(ALUOp == ADDop) ? A + B :
				(ALUOp == SUBop) ? A - B :
				(ALUOp == ORop)  ? A | B :
				(ALUOp == SLLop) ? B << Shamt:
				(ALUOp == RLBop) ? t :
				(ALUOp == GRAYop) ? A ^ (A >> 1) : 
				(ALUOp == SSZEop) ? ans :
				(ALUOp == SRLVop) ? B >> s : 
				(ALUOp == SLTop) ? sltans : -1;
	
	/*
	always @(*) begin 
		case (ALUOp)
			ADDop: C = A + B;
			SUBop: C = A - B;
			ORop : C = A | B;
			SLLop: C = B << Shamt;
			
			RLBop: begin
				for (i = 0; i < B; i = i + 1) begin
					C[i] = ~A[i];
				end
				for (i=B;i<32;i=i+1) begin
					C[i] = A[i];
				end
			end
			
			default: C = -1;
		endcase
	end*/
	
endmodule