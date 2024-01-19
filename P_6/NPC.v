`include "defines.v"
module NPC(
    input equal,
    input nequal,
    input [5:0] op,
    input [5:0] funct,
    input [31:0] pc4,
    input [25:0] dst,
    input [31:0] regdst,
    input [15:0] offset,
    output reg [31:0] npc,
    output reg Dclear,
    output reg [31:0] pc8,
    output reg branch
);


    
    wire [31:0] beq;
    wire [31:0] j;
	wire [31:0] pc;
	
    
    assign beq = {{14{offset[15]}}, offset, {2{1'b0}}} + pc4;
	
    assign pc = pc4-32'd4;
	
	assign j = {pc[31:28], dst, 1'b0, 1'b0};

    always @(*) begin
        Dclear = 0;
        pc8 = pc4 + 4;
        branch = 0;
        npc =  32'h00003000;
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
        `BNE : begin
            if (nequal == 1) begin
                Dclear = 0;
                npc = beq;
                branch =  1;
            end
        end
        default : begin
            Dclear = 0;
            npc = 0;
            branch =  0;
        end
        endcase
    end

endmodule