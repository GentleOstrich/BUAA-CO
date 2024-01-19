.macro get_index(%dex, %src)
	sll %dex, %src, 2
.end_macro

.data
str: .space 1000

.text
li $v0, 5
syscall
move $s0, $v0 # s0 is n

func:
# initial
li $t2, 1 # digit
li $t3, 0 # carry
get_index($t4, $t2)
sw $t2, str($t4)
li $t0 2 # i


addi $s0, $s0, 1
for_1_begin:
	slt $t4, $t0, $s0
	beqz $t4, for_1_end
	
li $t1 1 # j
for_2_begin:
addi $a1, $t2, 1
slt $t4, $t1, $a1
beqz $t4, for_2_end
	get_index($t4, $t1)
	lw $t5, str($t4)
	mul $t5, $t5, $t0
	add $t5, $t5, $t3
	li $t7, 10
	div $t5, $t7
	mfhi $t6
	sw $t6, str($t4)
	div $t3, $t5, 10	
addi $t1, $t1, 1
j for_2_begin
for_2_end:

while:
beqz $t3, while_end
	get_index($t4, $t1)
	li $t7, 10
	div $t3, $t7
	mfhi $t7
	sw $t7, str($t4)
	div $t3, $t3, 10
	addi $t1, $t1, 1
j while
while_end:
	addi $t2, $t1, -1
addi $t0, $t0, 1
j for_1_begin
for_1_end:

move $t0, $t2
for_3_begin:
beqz $t0, for_3_end
	get_index($t4, $t0)
	lw $a0, str($t4)
	li $v0, 1
	syscall
addi $t0, $t0, -1
j for_3_begin
for_3_end:

li $v0, 10
syscall






