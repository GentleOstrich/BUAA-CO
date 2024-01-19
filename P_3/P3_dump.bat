@echo off
echo v2.0 raw> 1.txt
java -jar mars.jar  a db mc CompactDataAtZero dump 0x00003000-0x00030000 HexText 2.txt P3_testbench.asm
type 1.txt 2.txt > P3_testbench.txt
type P3_testbench.txt
del 1.txt
del 2.txt
pause