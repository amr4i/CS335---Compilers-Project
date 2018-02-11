.data
B:	.word 0
a:	.word 0
x:	.word 0
.text
main:
li $s7, 2
wow:
li $s6, 7
add $s7, $s7, $s6
sw $s7, a
li $t0, 50
sle $s7, $s7, $t0
bne $s7, $zero, wow
jal foo
li $v0, 10
syscall
foo:
move $a0, $s7
li $v0, 1
syscall
jr $rs
