.macro getIndex(%ans, %i, %j)
    sll %ans, %i, 4
    add %ans, %ans, %j
    sll %ans, %ans, 2
.end_macro
.macro read
    li $v0, 5
    syscall
.end_macro
.macro write
    li $v0, 1
    syscall
.end_macro
.data
f: .space 1024
h: .space 1024
g: .space 1024
space: .asciiz " "
enter: .asciiz "\n"
.text
read
move $s0, $v0 # s0 m1
read
move $s1, $v0 # s1 n1
read 
move $s2, $v0 # s2 m2
read
move $s3, $v0 # s3 n2

li $t0, 0 # to i
for1:
slt $t1, $t0, $s0
beqz $t1, for1end
    li $t2, 0 #t2 j
    for2:
    slt $t1, $t2, $s1
    beqz $t1, for2end
        read
        getIndex($t1, $t0, $t2)
        sw $v0, f($t1)
    addi $t2, $t2, 1
    j for2
    for2end:
addi $t0, $t0, 1
j for1
for1end:

li $t0, 0 # to i
for11:
slt $t1, $t0, $s2
beqz $t1, for11end
    li $t2, 0 #t2 j
    for22:
    slt $t1, $t2, $s3
    beqz $t1, for22end
        read
        getIndex($t1, $t0, $t2)
        sw $v0, h($t1)
    addi $t2, $t2, 1
    j for22
    for22end:
addi $t0, $t0, 1
j for11
for11end:

# s0 m1
# s1 n1
# s2 m2
# s3 n2

sub $s4, $s0, $s2 # s4 a
addi $s4, $s4, 1
sub $s5, $s1, $s3 # s5 b
addi $s5, $s5, 1

li $t0, 0 # i
fori:
slt $t4, $t0, $s4
beqz $t4, foriend
    li $t1, 0 # j
    forj:
    slt $t4, $t1, $s5
    beqz $t4, forjend 
        li $t2, 0 # k
        fork:
        slt $t4, $t2, $s2
        beqz $t4, forkend
        addu $t6, $t2, $t0 # i + k
        slt $t4, $t6, $s0
        beqz $t4, forkend
            li $t3, 0 # l
            forl:
            slt $t4, $t3, $s3
            beqz $t4, forlend
            addu $t6, $t3, $t1 # j + l
            slt $t4, $t6, $s1
            beqz $t4, forkend
                getIndex($t4, $t0, $t1)
                lw $t4, g($t4)
                addu $t5, $t0, $t2 # i + k
                addu $t6, $t1, $t3 # j + l
                getIndex($t5, $t5, $t6)
                lw $t5, f($t5)
                getIndex($t6, $t2, $t3)
                lw $t6, h($t6)
                mul $t5, $t5, $t6
                addu $t4, $t4, $t5
                getIndex($t5, $t0, $t1)
                sw $t4, g($t5)
            add $t3, $t3, 1
            j forl
            forlend:
        add $t2, $t2, 1
        j fork
        forkend:
    addi $t1, $t1, 1
    j forj
    forjend:
addi $t0, $t0, 1
j fori
foriend:

li $t0, 0
for111:
slt $t1, $t0, $s4
beqz $t1, for111end
    li $t2, 0
    for222:
    slt $t1, $t2, $s5
    beqz $t1, for222end
        getIndex($t1, $t0, $t2)
        lw $a0, g($t1)
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

li $v0, 10
syscall












