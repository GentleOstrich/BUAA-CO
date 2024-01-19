module ifu(
    input         Reset,
    input         Clk,
    input  [31:0] NPC,
    output [31:0] PC,
    output [31:0] Instr
);	
    reg [31:0] PCreg;
    reg [31:0] IM [0:4095];

    wire [31:0] addr;


    assign addr = (PC - 32'h00003000) >> 2;

    always @(posedge Clk) begin
        if (Reset == 1'b1) begin
            PCreg <= 32'h0000_3000;
        end else begin
            PCreg <= NPC;
        end
    end


    assign PC = PCreg;
    assign Instr = IM[addr];


    integer i;
    initial begin
		PCreg = 32'h0000_3000;
		for(i=0;i<4096;i=i+1) begin
			IM[i] = 32'h0000_0000;
		end
		$readmemh("code.txt",IM);
	end
endmodule