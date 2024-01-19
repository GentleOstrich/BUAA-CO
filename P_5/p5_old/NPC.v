`include "defines.v"
module NPC(
    input equal,
	input rsletz,
    input [5:0] op,
    input [5:0] funct,
    input [31:0] pc,
    input [25:0] dst,
    input [31:0] regdst,
    input [15:0] offset,
    output reg [31:0] npc,
    output reg Dclear,
    output reg [31:0] pc4,
    output reg branch,
	output reg BLEZALC_EN
);


    //wire [31:0] pcadd4;
    wire [31:0] beq;
    wire [31:0] j;

    //assign pcadd4 = pc + 32'd4;
    assign beq = {{14{offset[15]}}, offset, {2{1'b0}}} + pc;
    assign j = {pc[31:28], dst, 1'b0, 1'b0};

    always @(*) begin
        Dclear = 0;
        pc4 = pc + 4;
        branch = 0;
        npc =  32'h00003000;
		BLEZALC_EN = 0;
        case (op)
        `R : begin
            case (funct)
                `JR : begin
                    Dclear = 0;
                    npc = regdst;
                    branch = 1;
                end
				`JALR : begin
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

		`BLEZALC: begin
			if (rsletz == 1) begin
				Dclear = 0;
				npc = beq; 
				branch = 1;
				BLEZALC_EN = 1;
			end else begin
				BLEZALC_EN = 0;
			end
		end
		
        default : begin
			branch = 0;
            npc =  32'h00003000;
        end
        endcase
    end

endmodule