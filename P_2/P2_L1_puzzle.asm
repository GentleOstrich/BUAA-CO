.macro read
    li $v0, 5
    syscall
.end_macro
.macro put
    li $v0, 1
    syscall
.end_macro
.macro getIndex(%ans, %i, %j)
    sll %ans, %i, 3
    addu %ans, %ans, %j
    sll %ans, %ans, 2
.end_macro
.macro push(%src)
    sw %src, 0($sp)
    subi $sp, $sp, 4
.end_macro
.macro pop(%src)
    addi $sp, $sp, 4
    lw %src, 0($sp)
.end_macro

.data
a: .space 400
flag: .space 400
stack: .space 400

.text
read
move $s0, $v0 # $s0 n 
read
move $s1, $v0 # $s1 m 

li $t0, 0 # $t0 i
addiu $t1, $s1, 2 #  $t1 m + 2
for1:
slt $t2, $t0, $t1
beqz $t2, endfor1
    li $v0, 1
    getIndex($t2, $zero, $t0)
    sw $v0, a($t2)
    addi $t3, $s0, 1 # n + 1
    getIndex($t2, $t3, $t0)
    sw $v0, a($t2)
addi $t0, $t0, 1
j for1
endfor1:

li $t0, 0 # $t0 i
addiu $t1, $s0, 2 #  $t1 n + 2
for2:
slt $t2, $t0, $t1
beqz $t2, endfor2
    li $v0, 1
    getIndex($t2, $t0, $zero) 
    sw $v0, a($t2)
    addi $t3, $s1, 1 # m + 1
    getIndex($t2, $t0, $t3)
    sw $v0, a($t2)
addi $t0, $t0, 1
j for2
endfor2:

li $t0, 1        # $t0 i 
addi $t2, $s0, 1 # $t2, n + 1
for3:
slt $t4, $t0, $t2
beqz $t4, endfor3
    li $t1, 1        # $t1 j
    addi $t3, $s1, 1 # $t3, m + 1
    for4:
    slt $t4, $t1, $t3
    beqz $t4, endfor4
        read
        getIndex($t4, $t0, $t1)
        sw $v0, a($t4)
    addi $t1, $t1, 1
    j for4
    endfor4:    
addi $t0, $t0, 1
j for3
endfor3:

read
move $a0, $v0 # $a0 x1
read
move $a1, $v0 # $a1 y1
read
move $a2, $v0 # $a2 x2
read 
move $a3, $v0 # $a3 y2


jal dfs

move $a0, $t0
li $v0, 1
syscall

li $v0, 10
syscall

#
# a0 x1
# a1 y1
# a2 x2
# a3 y2
# $t0 count

dfs:
li $t0, 0 # $t0 count
push($ra)

c1:
beq $a0, $a2, c11
j c2

c2:
beq $a1, $a3, c21
j out

c11:
addi $t1, $a1, 1
beq $t1, $a3,cp1
j c12

c12:
subi $t1, $a1, 1
beq $t1, $a3, cp1
j c2

c21:
addi $t1, $a0, 1
beq $t1, $a2, cp1
j c22

c22:
subi $t1, $a0, 1
beq $t1, $a2, cp1
j out

cp1:
    addi $t0, $t0, 1
j return

out:
#
# a0 x1
# a1 y1
# a2 x2
# a3 y2
# $t0 count
if1:
    addi $t1, $a0, 1
    getIndex($t2, $t1, $a1)
    lw $t2, a($t2)
    beqz $t2, aeq01
    j if2
    aeq01:
    getIndex($t2, $t1, $a1)
    lw $t2, flag($t2)
    beqz $t2, if1ok
    j if2
    if1ok:
        getIndex($t2, $a0, $a1)
        li $v0, 1
        sw $v0, flag($t2)
        push($a0)
        push($t0)
        addi $a0, $a0, 1
        jal dfs
        pop($t2)
        addu $t0, $t0, $t2
        pop($a0)
        getIndex($t2, $a0, $a1)
        li $v0, 0
        sw $v0, flag($t2)
if2:
    subi $t1, $a0, 1
    getIndex($t2, $t1, $a1)
    lw $t2, a($t2)
    beqz $t2, aeq02
    j if3
    aeq02:
    getIndex($t2, $t1, $a1)
    lw $t2, flag($t2)
    beqz $t2, if2ok
    j if3
    if2ok:
        getIndex($t2, $a0, $a1)
        li $v0, 1
        sw $v0, flag($t2)
        push($a0)
        push($t0)
        subi $a0, $a0, 1
        jal dfs
        pop($t2)
        addu $t0, $t0, $t2
        pop($a0)
        getIndex($t2, $a0, $a1)
        li $v0, 0
        sw $v0, flag($t2)
if3:
    addi $t1, $a1, 1
    getIndex($t2, $a0, $t1)
    lw $t2, a($t2)
    beqz $t2, aeq03
    j if4
    aeq03:
    getIndex($t2, $a0, $t1)
    lw $t2, flag($t2)
    beqz $t2, if3ok
    j if4
    if3ok:
        getIndex($t2, $a0, $a1)
        li $v0, 1
        sw $v0, flag($t2)
        push($a1)
        push($t0)
        addi $a1, $a1, 1
        jal dfs
        pop($t2)
        addu $t0, $t0, $t2
        pop($a1)
        getIndex($t2, $a0, $a1)
        li $v0, 0
        sw $v0, flag($t2)
if4:
    subi $t1, $a1, 1
    getIndex($t2, $a0, $t1)
    lw $t2, a($t2)
    beqz $t2, aeq04
    j if5
    aeq04:
    getIndex($t2, $a0, $t1)
    lw $t2, flag($t2)
    beqz $t2, if4ok
    j if5
    if4ok:
        getIndex($t2, $a0, $a1)
        li $v0, 1
        sw $v0, flag($t2)
        push($a1)
        push($t0)
        subi $a1, $a1, 1
        jal dfs
        pop($t2)
        addu $t0, $t0, $t2
        pop($a1)
        getIndex($t2, $a0, $a1)
        li $v0, 0
        sw $v0, flag($t2)
if5:
return:
    pop($ra)
    jr $ra

