.data
B:	.word 0
a:	.word 0
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
li $t0, 50
sw $s6, a
sle $s6, $s6, $t0
sw $s7, B
sw $s6, x
lw $s7, x
bne $s7, $zero, wow
jal foo
li $v0, 10
syscall
foo:
lw $s7, a
li $v0, 1
move $a0, $s7
syscall
jr $ra
