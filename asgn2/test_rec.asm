.data
_g:	.word 0
_g0:	.word 0
_g1:	.word 0
_g2:	.word 0
_g3:	.word 0
_t1:	.word 0
string_14:	.asciiz "Value of g is "
string_16:	.asciiz "\n"
.text
main:
_main:
li $s7, 10
sw $s7, _g
jal _myfunc
jr $ra
_myfunc:
lw $s7, _g
sw $s7, _g
move $s7, $s7
li $t0, 0
sw $s7, _g0
seq $s7, $s7, $t0
sw $s7, _t1
lw $s7, _t1
bne $s7, $zero, _D2046
j _D2047
_D2046:
li $v0, 10
syscall
_D2047:
lw $s7, _g
move $s6, $s7
li $v0, 4
la $a0, string_14
syscall
li $v0, 1
move $a0, $s6
syscall
li $v0, 4
la $a0, string_16
syscall
move $s7, $s7
sw $s7, _g2
addi $s7, $s7, -1
move $s7, $s7
sw $s7, _g3
sw $s6, _g1
jal _myfunc
