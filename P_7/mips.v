`include "defines.v"
module mips(
    input clk,
    input reset,
    input interrupt,// 外部中断信号
    output [31:0] macroscopic_pc,// 宏观PC

    output [31:0] i_inst_addr,
    input  [31:0] i_inst_rdata,

    output [31:0] m_data_addr,
    input  [31:0] m_data_rdata,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    
    output [31:0] m_int_addr,// 中断发生器待写入地址
    output [3 :0] m_int_byteen,// 中断发生器字节使能信�

    output [31:0] m_inst_addr,

    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,

    output [31:0] w_inst_addr
); 
    assign i_inst_addr = cpu_i_inst_addr;
    assign m_data_addr = bridge_m_data_addr;
    assign m_data_wdata = bridge_m_data_wdata;
    assign m_data_byteen = bridge_m_data_byteen;
    assign m_inst_addr = bridge_m_inst_addr;

    assign m_int_addr = (interrupt == 1) ? 32'h0000_7f20 : bridge_m_data_addr;
    assign m_int_byteen = (interrupt == 1) ? 1 : bridge_m_data_byteen;

    wire [31:0] cpu_i_inst_addr, cpu_m_data_addr, cpu_m_data_wdata, cpu_m_inst_addr, 
                bridge_m_data_addr, bridge_m_data_rdata,  bridge_m_inst_addr,
                bridge_m_data_wdata, bridge_TC0_addr, bridge_TC0_wdata, bridge_TC0_rdata, bridge_TC1_addr, bridge_TC1_wdata, bridge_TC1_rdata; 
    wire bridge_TC0_we, bridge_TC1_we, TC0_int, TC1_int;
	wire [3:0] cpu_m_data_byteen, bridge_m_data_byteen;

    CPU cpu0(
        .clk(clk),
        .reset(reset),
        .i_inst_rdata(i_inst_rdata), //i
        .m_data_rdata(bridge_m_data_rdata), //i
        .i_inst_addr(cpu_i_inst_addr), //o
        .m_data_addr(cpu_m_data_addr), //o
        .m_data_wdata(cpu_m_data_wdata), //o
        .m_data_byteen(cpu_m_data_byteen), //o
        .m_inst_addr(cpu_m_inst_addr), //o
        .w_grf_we(w_grf_we), //o
        .w_grf_addr(w_grf_addr), //o
        .w_grf_wdata(w_grf_wdata), //o
        .w_inst_addr(w_inst_addr), //o

        .TC0_int(TC0_int), //i
        .TC1_int(TC1_int), //i
        .IG_int(interrupt), //i
 
        .macroscopic_pc(macroscopic_pc)// 宏观PC //o
    );



    Bridge bridge0(
        .temp_data_addr(cpu_m_data_addr), //i
        .temp_data_wdata(cpu_m_data_wdata), //i
        .temp_data_byteen(cpu_m_data_byteen), //i
        .temp_inst_addr(cpu_m_inst_addr), // i
        .temp_data_rdata(bridge_m_data_rdata), //o

        .m_data_addr(bridge_m_data_addr), //o
        .m_data_wdata(bridge_m_data_wdata), //o
        .m_data_byteen(bridge_m_data_byteen), //o
        .m_inst_addr(bridge_m_inst_addr), // o
        .m_data_rdata(m_data_rdata), //i

        .TC0_addr(bridge_TC0_addr),
        .TC0_we(bridge_TC0_we),
        .TC0_wdata(bridge_TC0_wdata),
        .TC0_rdata(bridge_TC0_rdata),

        .TC1_addr(bridge_TC1_addr),
        .TC1_we(bridge_TC1_we),
        .TC1_wdata(bridge_TC1_wdata),
        .TC1_rdata(bridge_TC1_rdata)
    );

    TC timer0(
    .clk(clk),
    .reset(reset),
    .Addr(bridge_TC0_addr[31:2]),
    .WE(bridge_TC0_we),
    .Din(bridge_TC0_wdata),
    .Dout(bridge_TC0_rdata),
    .IRQ(TC0_int)
    );

    TC timer1(
    .clk(clk),
    .reset(reset),
    .Addr(bridge_TC1_addr[31:2]),
    .WE(bridge_TC1_we),
    .Din(bridge_TC1_wdata),
    .Dout(bridge_TC1_rdata),
    .IRQ(TC1_int)
    );




endmodule