.data
_a:	.word 0
_ch:	.word 0
_res:	.word 0
string_1:	.asciiz "Odd Even Check\n"
string_5:	.asciiz "Even Number Entered\n"
string_8:	.asciiz "Odd Number Entered\n"
.text
main:
li $v0, 4
la $a0, string_1
syscall
li $v0, 5
syscall
sw $v0, _a
jal _oecheck
move $s7, $v0
sw $s7, _res
lw $s7, _res
bne $s7, $zero, _odd
li $v0, 4
la $a0, string_5
syscall
li $v0, 10
syscall
_odd:
li $v0, 4
la $a0, string_8
syscall
li $v0, 10
syscall
_oecheck:
lw $s7, _a
sw $s7, _a
li $t0, 2
div $s7, $t0
mfhi $s7
sw $s7, _ch
lw $s7, _ch
move $v0, $s7
jr $ra
