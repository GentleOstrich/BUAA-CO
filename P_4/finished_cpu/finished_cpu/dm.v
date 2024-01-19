module dm(
    input  [31:0] PC,
    input         Clk,
    input         Reset,
    input         MemWrite,
    input  [1:0]  WBH,
    input  [31:0] A,
    input  [31:0] Din,
    output [31:0] Dout
);


    reg [31:0] ram [0:3071];


    wire [11:0] addr;
    wire [31:0] byte0;
    wire [31:0] byte1;
    wire [31:0] byte2;
    wire [31:0] byte3;
    wire [31:0] half0;
    wire [31:0] half1;
    wire [31:0] wdata;


    assign addr = A >> 2;
    assign byte0 = {ram[addr][31:8], Din[7:0]};
    assign byte1 = {ram[addr][31:16], Din[7:0], ram[addr][7:0]};
    assign byte2 = {ram[addr][31:24], Din[7:0], ram[addr][15:0]};
    assign byte3 = {Din[7:0], ram[addr][23:0]};
    assign half0 = {ram[addr][31:16], Din[15:0]};
    assign half1 = {Din[15:0], ram[addr][15:0]};
    assign wdata = (WBH == 2'b00) ? Din : 
                  (WBH == 2'b01 && A[1:0] == 2'b00) ? byte0 :
                  (WBH == 2'b01 && A[1:0] == 2'b01) ? byte1 :
                  (WBH == 2'b01 && A[1:0] == 2'b10) ? byte2 :
                  (WBH == 2'b01 && A[1:0] == 2'b11) ? byte3 :
                  (WBH == 2'b10 && A[1] == 0) ? half0 :
                  (WBH == 2'b10 && A[1] == 1) ? half1 : -1; 
             


    //integer file;
    always @(posedge Clk) begin
        if (Reset == 1'b1) begin
            for (i = 0; i < 3072; i = i + 1) begin
                ram[i] <= 32'd0;
            end
        end else if (MemWrite == 1'b1) begin
            ram[addr] <= wdata;
            $display("@%h: *%h <= %h", PC, {A[31:2], 1'b0, 1'b0}, wdata)	;
            //$fdisplay(file,"@%h: *%h <= %h", PC, {A[31:2], 1'b0, 1'b0}, wdata) ;
        end
    end


    assign Dout = (WBH == 2'b00) ? ram[addr] : 
                  (WBH == 2'b01 && A[1:0] == 2'b00) ? {{24{1'b0}}, ram[addr][7:0]} :
                  (WBH == 2'b01 && A[1:0] == 2'b01) ? {{24{1'b0}},ram[addr][15:8]} :
                  (WBH == 2'b01 && A[1:0] == 2'b10) ? {{24{1'b0}},ram[addr][23:16]} :
                  (WBH == 2'b01 && A[1:0] == 2'b11) ? {{24{1'b0}},ram[addr][31:24]} :
                  (WBH == 2'b10 && A[1] == 0) ? {{16{1'b0}},ram[addr][15:0]} :
                  (WBH == 2'b10 && A[1] == 1) ? {{16{1'b0}},ram[addr][31:16]} : -1; 


    integer i;
    initial begin
        //file = $fopen("data_out.txt","w");
        for (i = 0; i < 3072; i = i + 1) begin
            ram[i] <= 32'd0;
        end
    end
endmodule













