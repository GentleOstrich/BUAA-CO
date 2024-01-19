`include "defines.v"
module NPC(
    input equal,
	input rslz,
    input [5:0] op,
    input [5:0] funct,
    input [31:0] pc,
    input [25:0] dst,
    input [31:0] regdst,
    input [15:0] offset,
	input [31:0] rt,
    output reg [31:0] npc,
    output reg Dclear,
    output reg [31:0] pc4,
    output reg branch,
	output reg BLZ_EN
);


    //wire [31:0] pcadd4;
    wire [31:0] beq;
    wire [31:0] j;
	
	reg [31:0] j2;
	reg [31:0] temp;
    //assign pcadd4 = pc + 32'd4;
    assign beq = {{14{offset[15]}}, offset, {2{1'b0}}} + pc;
    assign j = {pc[31:28], dst, 1'b0, 1'b0};

    always @(*) begin
        Dclear = 0;
        pc4 = pc + 4;
        branch = 0;
        npc =  32'h00003000;
		BLZ_EN = 0;
		
        case (op)
		
        `R : begin
            case (funct)
                `JR : begin
                    Dclear = 0;
                    npc = regdst;
                    branch = 1;
                end
            endcase
        end
		
        `BEQ : begin
            if (equal == 1) begin
                Dclear = 0;
                npc = beq;
                branch =  1;
            end
        end
		
        `JAL : begin
            Dclear = 0;
            npc = j;
            branch = 1;
        end
		
        `J : begin
            Dclear = 0;
            npc = j;
            branch = 1;
        end
		
		`BLZTAL: begin
			temp = {{14{offset[15]}}, offset, {2{1'b0}}};
			j2 = (temp << rt[1:0]) + pc;
			if (rslz == 1'b1) begin
				Dclear = 0;
				BLZ_EN = 1;
				branch = 1;
				npc = j2;
			end else begin
				BLZ_EN = 0;
				branch = 0;
			end
		end
		
        default : begin
			branch = 0;
            npc =  32'h00003000;
        end
		
        endcase
    end

endmodule