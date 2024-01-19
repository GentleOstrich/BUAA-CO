.macro done
    li $v0, 10
    syscall
.end_macro
.macro read_c
    li $v0, 12
    syscall
.end_macro
.macro read_n
    li $v0, 5
    syscall
.end_macro
.macro push(%src)
    sw %src, 0($sp)
    subi $sp, $sp, 4
.end_macro
.macro pop(%des)
    addi $sp, $sp, 4
    lw %des, 0($sp)
.end_macro
.data
stack: .space 100
.text
li $a1, 1
read_n
move $a0, $v0 # a0 n

li $t0, 0 # t0 i
for:
slt $t1, $t0, $a0
beqz $t1, endfor
    read_c # v0 c
    if:
        srl $t1, $a0, 1 # t1 n >> 1
        slt $t2, $t0, $t1
        beqz $t2, else
            push($v0)
            j out
    else:
        srl $t1, $a0, 1 # t1 n >> 1
        beq $t0, $t1, isodd
        j POP 

        isodd:
        andi $t1, $a0, 1
        li $t2, 1
        beq $t1, $t2, out

        POP:
            pop($t1)
            beq $t1, $v0, out
            li $a1, 0
        out:
addiu $t0, $t0, 1
j for
endfor:
    move $a0, $a1
    li $v0, 1
    syscall
    li $v0, 10
    syscall
