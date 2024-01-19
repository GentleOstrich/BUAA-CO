.data

s:  .space 800
s1: .space 240
yes: .asciiz "yes\n"
no: .asciiz "no\n"

.text

la $a0, s
li $a1, 200
li $v0, 8
syscall
la $a0, s1
li $a1, 60
li $v0, 8
syscall

li $t0, 0
while:

lb $t2, s($t0)
beq $t2, '\n', whileend
	move $t1, $t0 # t1 k
	li $t2, 0 # j
	while2:

	lb $t4, s1($t2)
	beq $t4, '\n', while2end

		lb $t3, s($t1)

		lb $t4, s1($t2)
		beq $t3, $t4, next
		j while2end
		next:
		addi $t2, $t2, 1
		addi $t1, $t1, 1
		j while2
	while2end:

	lb $t4, s1($t2)
	beq $t4, '\n', ok
	j not
	ok:
		la $a0, yes
		li $v0, 4
		syscall
		li $v0, 10
		syscall
not:
addi $t0, $t0, 1
j while
whileend:

		la $a0, no
		li $v0, 4
		syscall
		li $v0, 10
		syscall























