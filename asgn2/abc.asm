.data
_b:	.space 60
_a:	.word 0
_c:	.word 0
_j:	.word 0
_x:	.word 0
string_11:	.asciiz "in foo\n"
.text
main:
_wow:
li $s7, 15
li $t0, 8
sll $t0, $t0, 2
sw $s7, _b($t0)
li $t0, 7
sw $s7, _a
sle $s7, $s7, $t0
sw $s7, _x
lw $s7, _x
bne $s7, $zero, _wow
jal _jal
move $s7, $v0
li $v0, 1
move $a0, $s7
syscall
li $v0, 10
syscall
sw $s7, _c
_jal:
li $v0, 4
la $a0, string_11
syscall
li $t0, 8
sll $t0, $t0, 2
lw $s7, _b($t0)
sw $s7, _j
lw $s7, _j
move $v0, $s7
jr $ra
