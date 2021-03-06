connect -url tcp:127.0.0.1:3121
targets -set -filter {jtag_cable_name =~ "Digilent Nexys4DDR 210292745510A" && level==0} -index 0
fpga -file /opt/Xilinx/Projects/scatter_dma/scatter_dma.sdk/block_design_wrapper_hw_platform_0/block_design_wrapper.bit
targets -set -nocase -filter {name =~ "microblaze*#0" && bscan=="USER2"  && jtag_cable_name =~ "Digilent Nexys4DDR 210292745510A"} -index 0
loadhw /opt/Xilinx/Projects/scatter_dma/scatter_dma.sdk/block_design_wrapper_hw_platform_0/system.hdf
targets -set -nocase -filter {name =~ "microblaze*#0" && bscan=="USER2"  && jtag_cable_name =~ "Digilent Nexys4DDR 210292745510A"} -index 0
rst -system
after 3000
targets -set -nocase -filter {name =~ "microblaze*#0" && bscan=="USER2"  && jtag_cable_name =~ "Digilent Nexys4DDR 210292745510A"} -index 0
dow /opt/Xilinx/Projects/scatter_dma/scatter_dma.sdk/mb_app_0/Debug/mb_app_0.elf
bpadd -addr &main
