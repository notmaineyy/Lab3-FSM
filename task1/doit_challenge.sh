#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f lfsr_challenge.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace lfsr_challenge.sv --exe lfsr_challenge_tb.cpp

#build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vlfsr_challenge.mk Vlfsr_challenge

# run executable simulation file
obj_dir/Vlfsr_challenge