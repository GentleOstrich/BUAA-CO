module npc(
    input  [5:0]  Op,
    input  [5:0]  Funct,
    input  [25:0] Des,
    input  [15:0] Offset,
    input         Equal,
	input         OddOne,
    input  [31:0] PC,
	output        BSOAL,
    output        JAL,        
    output [31:0] NPC
);


    parameter BEQsig = 6'b000100;
    parameter Jsig   = 6'b000010;
    parameter JALsig = 6'b000011;
	parameter BSOALsig = 6'b111111;
	parameter JASsig   = 6'b110110;

    wire [31:0] PCadd4;
    wire [31:0] beq;
    wire [31:0] j;

    assign PCadd4 = PC + 32'd4;
    assign beq = {{14{Offset[15]}}, Offset, {2{1'b0}}} + PCadd4;
    assign j = {PC[31:28], Des, 1'b0, 1'b0};
	
	assign BSOAL = (Op == BSOALsig && OddOne == 1'b1);
	
    assign JAL = (Op == JALsig);
    
	assign NPC = (Op == JALsig)                  ? j   :
                 (Op == BEQsig && Equal == 1'b1) ? beq : 
                 (Op == Jsig)                    ? j   : 
				 (Op == BSOALsig && OddOne == 1'b1) ? beq :
				 (Op == JASsig) ? j : PCadd4;
endmodule












