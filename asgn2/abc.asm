.data
B:	.space 60
a:	.word 0
c:	.word 0
d:	.word 0
x:	.word 0
string_11:	.asciiz "infoo"
.text
main:
wow:
li $s7, 15
li $t0, 8
sll $t0, $t0, 2
sw $s7, B($t0)
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
li $v0, 4
la $a0, string_11
syscall
li $t0, 8
sll $t0, $t0, 2
lw $s7, B($t0)
sw $s7, d
lw $s7, d
move $v0, $s7
jr $ra
