.data
B:	.word 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
a:	.word 0
c:	.word 0
d:	.word 0
x:	.word 0
.text
main:
wow:
li $t0, 8
sll $t0, $t0, 2
lw $s7, B($t0)
addi $s7, $s7, 5
li $t0, 7
sw $s7, a
sle $s7, $s7, $t0
sw $s7, x
lw $s7, x
bne $s7, $zero, wow
jal foo
move $s7, $v0
li $v0, 1
move $a0, $s7
syscall
li $v0, 10
syscall
sw $s7, c
foo:
lw $s7, a
li $v0, 1
move $a0, $s7
syscall
lw $s6, d
add $s6, $s6, $s7
andi $s5, $s6, 3
sw $s6, d
sw $s5, c
lw $s7, d
move $v0, $s7
jr $ra
