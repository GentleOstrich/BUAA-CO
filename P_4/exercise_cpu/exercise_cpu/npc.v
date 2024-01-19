module npc(
    input  [5:0]  Op,
    input  [5:0]  Funct,
    input  [25:0] Des,
    input  [15:0] Offset,
    input         Equal,
	input         Nez,
	input         LEZ,
    input  [31:0] PC,
    output        JAL,
	output        BNEZALC,
    output [31:0] NPC
);


    parameter BEQsig = 6'b000100;
    parameter Jsig   = 6'b000010;
    parameter JALsig = 6'b000011;
	parameter BNEZALCsig = 6'b011111;
	parameter JASsig = 6'b11_0110;
	parameter BLEZsig = 6'b00_0110;

    wire [31:0] PCadd4;
    wire [31:0] beq;
    wire [31:0] j;
	
    assign PCadd4 = PC + 32'd4;
    assign beq = {{14{Offset[15]}}, Offset, {2{1'b0}}} + PCadd4;
    assign j = {PC[31:28], Des, 1'b0, 1'b0};
	


    assign JAL = (Op == JALsig);
	assign BNEZALC = (Op == BNEZALCsig && Nez == 1'b1);
    assign NPC = (Op == JALsig)                  ? j   :
                 (Op == BEQsig && Equal == 1'b1) ? beq : 
                 (Op == Jsig)                    ? j   : 
				 (Op == BNEZALCsig && Nez == 1'b1) ? beq : 
				 (Op == JASsig)                    ? j :
				 (Op == BLEZsig && LEZ == 1'b1) ? beq :  PCadd4;
endmodule












