module grf(
    input [31:0]  PC,
    input [4:0]   A1,
    input [4:0]   A2,
    input [4:0]   A3,
    input [31:0]  WD,
    input         WE,
	input         JAS,
    input         Clk,
    input         Reset,
    output [31:0] RD1,
    output [31:0] RD2 
);

    reg [31:0] register [0:31];

    integer i;
    //integer file;
    assign RD1 = (JAS == 1'b1) ? register[29] : register[A1];
    assign RD2 = (JAS == 1'b1) ? 0: register[A2];

    always @(posedge Clk) begin
        if (Reset == 1'b1) begin 
            for (i = 0; i < 32; i = i + 1) begin
                register[i] <= 32'd0;
            end
        end else if (WE == 1'b1 && A3 != 1'b0) begin //JAL
            register[A3] <= WD;
            $display("@%h: $%d <= %h", PC, A3, WD);
            //$fdisplay(file, "@%h: $%d <= %h", PC, A3, WD);
        end 
    end

    initial begin
        //file = $fopen("data_out.txt","w");
        for (i = 0; i < 32; i = i + 1) begin
            register[i] <= 31'd0;
        end
    end
endmodule