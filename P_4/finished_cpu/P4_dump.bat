@echo off
java -jar mars.jar  a db mc CompactDataAtZero dump 0x00003000-0x00030000 HexText finished_cpu/code.txt P4_testbench.asm

pause