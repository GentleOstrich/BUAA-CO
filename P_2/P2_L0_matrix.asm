.macro read
    li $v0, 5
    syscall
.end_macro
.macro write
    li $v0, 1
    syscall
.end_macro
.macro getIndex(%ans, %i, %j)
    sll %ans, %i, 3
    add %ans, %ans, %j
    sll %ans, %ans, 2
.end_macro
.data
a: .space 400
b: .space 400
c: .space 400
space: .asciiz " "
enter: .asciiz "\n"
.text
read
move $s0, $v0 # s0 n


li $t0, 0 # to i
for1:
slt $t1, $t0, $s0
beqz $t1, for1end
    li $t2, 0 #t2 j
    for2:
    slt $t1, $t2, $s0
    beqz $t1, for2end
        read
        getIndex($t1, $t0, $t2)
        sw $v0, a($t1)
    addi $t2, $t2, 1
    j for2
    for2end:
addi $t0, $t0, 1
j for1
for1end:

li $t0, 0 # to i
for11:
slt $t1, $t0, $s0
beqz $t1, for11end
    li $t2, 0 #t2 j
    for22:
    slt $t1, $t2, $s0
    beqz $t1, for22end
        read
        getIndex($t1, $t0, $t2)
        sw $v0, b($t1)
    addi $t2, $t2, 1
    j for22
    for22end:
addi $t0, $t0, 1
j for11
for11end:


li $t0, 0 # t0 i
fori:
slt $t3, $t0, $s0
beqz $t3, foriend
    li $t1, 0 # t1 j
    forj:
    slt $t3, $t1, $s0
    beqz $t3, forjend
        li $t2, 0 #t2 t
        fort:
        slt $t3, $t2, $s0
        beqz $t3, fortend
            getIndex($t4, $t0, $t2)
            getIndex($t5, $t2, $t1)
            lw $t4, a($t4)
            lw $t5, b($t5)
            mul $t3, $t4, $t5
            getIndex($t4, $t0, $t1)
            lw $t4, c($t4)
            addu $t4, $t4, $t3
            getIndex($t3, $t0, $t1)
            sw $t4, c($t3)
        addi $t2, $t2, 1
        j fort
        fortend:
    addi $t1, $t1, 1
    j forj
    forjend:
addi $t0, $t0, 1
j fori
foriend:

li $t0, 0
for111:
slt $t1, $t0, $s0
beqz $t1, for111end
    li $t2, 0
    for222:
    slt $t1, $t2, $s0
    beqz $t1, for222end
        getIndex($t1, $t0, $t2)
        lw $a0, c($t1)
        write
        la $a0, space
        li $v0, 4
        syscall
    addi $t2, $t2, 1
    j for222
    for222end:
    la $a0, enter
    li $v0, 4
    syscall
addi $t0, $t0, 1
j for111
for111end:







