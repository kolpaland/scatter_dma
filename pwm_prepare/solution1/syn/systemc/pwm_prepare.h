// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pwm_prepare_HH_
#define _pwm_prepare_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pwm_prepare_control_axil_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CONTROL_AXIL_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_CONTROL_AXIL_DATA_WIDTH = 32>
struct pwm_prepare : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<16> > input_axis_TDATA;
    sc_in< sc_logic > input_axis_TVALID;
    sc_out< sc_logic > input_axis_TREADY;
    sc_out< sc_lv<16> > output_axis_TDATA;
    sc_out< sc_logic > output_axis_TVALID;
    sc_in< sc_logic > output_axis_TREADY;
    sc_in< sc_logic > s_axi_control_axil_AWVALID;
    sc_out< sc_logic > s_axi_control_axil_AWREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_AXIL_ADDR_WIDTH> > s_axi_control_axil_AWADDR;
    sc_in< sc_logic > s_axi_control_axil_WVALID;
    sc_out< sc_logic > s_axi_control_axil_WREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_AXIL_DATA_WIDTH> > s_axi_control_axil_WDATA;
    sc_in< sc_uint<C_S_AXI_CONTROL_AXIL_DATA_WIDTH/8> > s_axi_control_axil_WSTRB;
    sc_in< sc_logic > s_axi_control_axil_ARVALID;
    sc_out< sc_logic > s_axi_control_axil_ARREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_AXIL_ADDR_WIDTH> > s_axi_control_axil_ARADDR;
    sc_out< sc_logic > s_axi_control_axil_RVALID;
    sc_in< sc_logic > s_axi_control_axil_RREADY;
    sc_out< sc_uint<C_S_AXI_CONTROL_AXIL_DATA_WIDTH> > s_axi_control_axil_RDATA;
    sc_out< sc_lv<2> > s_axi_control_axil_RRESP;
    sc_out< sc_logic > s_axi_control_axil_BVALID;
    sc_in< sc_logic > s_axi_control_axil_BREADY;
    sc_out< sc_lv<2> > s_axi_control_axil_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    pwm_prepare(sc_module_name name);
    SC_HAS_PROCESS(pwm_prepare);

    ~pwm_prepare();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    pwm_prepare_control_axil_s_axi<C_S_AXI_CONTROL_AXIL_ADDR_WIDTH,C_S_AXI_CONTROL_AXIL_DATA_WIDTH>* pwm_prepare_control_axil_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_18;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > shift_val;
    sc_signal< sc_lv<32> > sum_val;
    sc_signal< sc_logic > enable_flag;
    sc_signal< sc_logic > input_axis_TDATA_blk_n;
    sc_signal< sc_logic > output_axis_TDATA_blk_n;
    sc_signal< bool > ap_sig_76;
    sc_signal< sc_logic > ap_sig_ioackin_output_axis_TREADY;
    sc_signal< sc_logic > ap_reg_ioackin_output_axis_TREADY;
    sc_signal< sc_lv<32> > tmp_fu_73_p1;
    sc_signal< sc_lv<32> > tmp_1_fu_77_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_83_p2;
    sc_signal< sc_lv<1> > storemerge_fu_93_p0;
    sc_signal< sc_lv<16> > tmp_3_fu_89_p1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< bool > ap_sig_123;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_st1_fsm_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<16> ap_const_lv16_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_123();
    void thread_ap_sig_18();
    void thread_ap_sig_76();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_ioackin_output_axis_TREADY();
    void thread_input_axis_TDATA_blk_n();
    void thread_input_axis_TREADY();
    void thread_output_axis_TDATA();
    void thread_output_axis_TDATA_blk_n();
    void thread_output_axis_TVALID();
    void thread_storemerge_fu_93_p0();
    void thread_tmp_1_fu_77_p2();
    void thread_tmp_2_fu_83_p2();
    void thread_tmp_3_fu_89_p1();
    void thread_tmp_fu_73_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
