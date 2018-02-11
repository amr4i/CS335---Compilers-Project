.data
B:	.word 0
a:	.word 0
c:	.word 0
d:	.word 0
x:	.word 0
.text
main:
li $v0, 5
syscall
sw $v0, a
wow:
li $s7, 7
lw $s6, a
add $s6, $s6, $s7
li $t0, 7
sw $s6, a
sle $s6, $s6, $t0
sw $s7, B
sw $s6, x
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
