`include "defines.v"
module CTRL(																																															
    input [5:0] op,
    input [5:0] funct,
    input [4:0] a1,
    input [4:0] a2,

	//阻塞
    input [1:0] E_Tnew,
    input [4:0] E_a3,
    input  E_we,

    input [1:0] M_Tnew,
	input [4:0] M_a3,
	input M_we,
	input BLEZALC_EN, 
	
    output reg useImm,
    output reg [1:0] EXTop,
    output reg [3:0] ALUop,
	output reg [1:0] WBHop,
    output reg RegWE,
    output reg [1:0] a3_sel,
    output reg MemWE,
    output reg [1:0] Tnew,

    output reg [1:0] wd_sel,
    output reg stall,
	output reg LWstall
);
    
    reg [1:0] Tuse_rs;
    reg [1:0] Tuse_rt;
    

/***********************************************************/
/**useImm, EXTop, ALUop, RegWE, a3_sel, MemWE, Tnew, wd_sel*/
/***********************************************************/


    always @(*) begin
		useImm=0;
		EXTop=0;
		ALUop=0;
		RegWE=0;
		a3_sel=0;
		MemWE=0;
		Tnew=0;
		Tuse_rs = 3;
		Tuse_rt = 3;
		wd_sel=0;
		WBHop = 0;
		LWstall = 0;
        case(op)
            `R: begin
                case(funct)
                `ADD : begin
					useImm=0;
					EXTop=0;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					WBHop = 0;
				end
				`ADDU : begin
					useImm=0;
					EXTop=0;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					WBHop = 0;
				end
                `SUB : begin
					useImm=0;
					EXTop=0;
					ALUop=`SUBop;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					WBHop = 0;
				end
				`SUBU : begin
					useImm=0;
					EXTop=0;
					ALUop=`SUBop;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					WBHop = 0;
				end
				`JR : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					RegWE=0;
					a3_sel=0;
					MemWE=0;
					Tnew=0;
					Tuse_rs = 0;
					Tuse_rt = 3;
					wd_sel=0;
					WBHop = 0;
				end
				`JALR : begin
					useImm=0;
					EXTop=0;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=2'b01;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 0;
					Tuse_rt = 3;
					wd_sel=2;
					WBHop = 0;
				end
				`CMCO : begin
						useImm=0;
						EXTop=0;
						ALUop=`CMCOop;
						RegWE=1;
						a3_sel=2'b01;
						MemWE=0;
						Tnew=1;
						Tuse_rs = 1;
						Tuse_rt = 1;
				   	 	wd_sel=1;
				   		WBHop = 0;
				end
				`RSON : begin
						useImm=0;
						EXTop=0;
						ALUop=`RSONop;
						RegWE=1;
						a3_sel=2'b01;
						MemWE=0;
						Tnew=1;
						Tuse_rs = 1;
						Tuse_rt = 1;
						wd_sel=1;
						WBHop = 0;
				end
                endcase
			//a3_sel 2'b00-rt 2'b01-rd 2'b10-31
            //wd_sel 0-mem 1-alures 2-pc+4
            end
            `ORI : begin
				   	useImm=1;
					EXTop=`ZeroExt;
					ALUop=`ORop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					WBHop = 0;
			end
            `LW : begin
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 1;
					Tuse_rt = 3;
					wd_sel=0;
					WBHop = `WORDop;
			end
            `SW : begin
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=0;
					a3_sel=0;
					MemWE=1;
					Tnew=0;
					Tuse_rs = 1;
					Tuse_rt = 2;
					wd_sel=0;
					WBHop = `WORDop;
			end
            `BEQ : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					RegWE=0;
					a3_sel=0;
					MemWE=0;
					Tnew=0;
					Tuse_rs=0;
					Tuse_rt=0;
					wd_sel=1;
			end
            `LUI : begin
					useImm=1;
					EXTop=`High16;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=1;
					Tuse_rs = 3;
					Tuse_rt = 3;
					wd_sel=1;
			end
            `JAL : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					RegWE=1;
					a3_sel=2'b10;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 3;
					Tuse_rt = 3;
					wd_sel=2'b10;
			end
            `LB : begin
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 1;
					Tuse_rt = 3;
					wd_sel=0;
					WBHop = `BYTEop;
			end
			`SB : begin
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=0;
					a3_sel=0;
					MemWE=1;
					Tnew=0;
					Tuse_rs = 1;
					Tuse_rt = 2;
					wd_sel=0;
					WBHop = `BYTEop;
			end
			`BLEZALC : begin // 分支并链接
					useImm=0;
					EXTop=0;
					ALUop=0;
					RegWE= (BLEZALC_EN == 1) ? 1 : 0;
					a3_sel=2'b10;
					MemWE=0;
					Tnew=2;
					Tuse_rs=0;
					Tuse_rt=3;
					wd_sel=2'b10;
			end
			`LWSO : begin // 条件load
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 1;
					Tuse_rt = 2;
					wd_sel=0;
					WBHop = `LWSOop;
					LWstall = 1;
			end
			`LRM : begin // 条件load
					useImm=1;
					EXTop=`SignExt;
					ALUop=`ADDop;
					RegWE=1;
					a3_sel=0;
					MemWE=0;
					Tnew=2;
					Tuse_rs = 1;
					Tuse_rt = 2;
					wd_sel=0;
					WBHop = `LRMop;
					LWstall = 1;
			end
            //a3_sel 2'b00-rt 2'b01-rd 2'b10-31
            //wd_sel 0-mem 1-alures 2-pc+4

        endcase

    end


    // 闃诲淇″彿
    always @(*) begin
        if ((Tuse_rs == 2'b00 && (E_Tnew == 2'b01 || E_Tnew == 2'b10) || Tuse_rs == 2'b01 && E_Tnew == 2'b10) && E_we == 1 && a1 == E_a3 && a1 != 0) begin
            stall = 1;
		end else if ((Tuse_rs == 2'b00 && (M_Tnew == 2'b01 || M_Tnew == 2'b10) || Tuse_rs == 2'b01 && M_Tnew == 2'b10) && M_we == 1 && a1 == M_a3 && a1 != 0) begin
			stall = 1;
		end else if ((Tuse_rt == 2'b00 && (E_Tnew == 2'b01 || E_Tnew == 2'b10) || Tuse_rt == 2'b01 && E_Tnew == 2'b10) && E_we == 1 && a2 == E_a3 && a2 != 0) begin
            stall = 1;
        end else if ((Tuse_rt == 2'b00 && (M_Tnew == 2'b01 || M_Tnew == 2'b10) || Tuse_rt == 2'b01 && M_Tnew == 2'b10) && M_we == 1 && a2 == M_a3 && a2 != 0) begin
            stall = 1;
        end else begin
            stall = 0;
        end

    end


endmodule