.macro read
li $v0, 5
syscall
.end_macro

.macro get_index(%des, %src)
sll %des, %src, 2
.end_macro

.macro push(%src)
sw %src, 0($sp)
subi $sp, $sp, 4
.end_macro

.macro pop(%src)
addi $sp, $sp, 4
lw %src, 0($sp)
.end_macro

.macro write
li $v0, 1
syscall
.end_macro

.data
space: .asciiz " "
enter: .asciiz "\n"
symbol: .space 40 # 这儿和.word有什么区别？
array: .space 40
stack: .space 200



.text
read
move $s0, $v0 # s0 n
li $t1, 0 # index
jal func

li $v0, 10
syscall

func:
push $ra

slt $t2, $t1, $s0
beqz $t2, if1

li $t0, 0 # for 2
for_2_begin:
	slt $t2, $t0, $s0
	beqz $t2, for_2_end
	
	get_index($t2, $t0)
	lw $t2, symbol($t2)
	beqz $t2, if2

addi $t0, $t0, 1
j for_2_begin

if2:
	addi $t3, $t0, 1 # if2
	get_index($t2, $t1)
	sw $t3, array($t2)
	li $t3, 1
	get_index($t2, $t0)
	sw $t3, symbol($t2)
	
	push $t1
	push $t0
	addi $t1, $t1, 1
	jal func
	pop $t0
	pop $t1
	
	get_index($t2, $t0)
	sw $zero, symbol($t2)

addi $t0, $t0, 1
j for_2_begin
for_2_end:
	pop $ra
	jr $ra

if1:
li $t0, 0 # t0 i
for_1_begin: 
	slt $t2, $t0, $s0 # for 1
	beqz $t2, for_1_end
	get_index($t2, $t0)
	lw $a0, array($t2)
	write
	la $a0, space
	li $v0, 4
	syscall
addi $t0, $t0, 1
j for_1_begin
for_1_end:

	la $a0, enter
	li $v0, 4
	syscall
	
	pop $ra
	jr $ra






