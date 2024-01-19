@echo off
java -jar Mars.jar  a db mc CompactDataAtZero dump 0x00003000-0x00030000 HexText P6/code.txt test.asm

pause