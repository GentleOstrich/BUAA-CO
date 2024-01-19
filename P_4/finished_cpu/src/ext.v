module ext (
    input  [1:0]  ExtOp,
    input  [15:0] Imm16,
    output [31:0] Ext32
);


    assign Ext32 = (ExtOp == 2'b00) ? {{16{1'b0}}, Imm16} :
                   (ExtOp == 2'b01) ? {{16{Imm16[15]}}, Imm16} :
                   (ExtOp == 2'b10) ? {Imm16, {16{1'b0}}} : -1;
endmodule