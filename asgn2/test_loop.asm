.data
_i:	.word 0
_j:	.word 0
_k:	.word 0
_res:	.word 0
_t:	.word 0
string_31:	.asciiz "res = "
string_33:	.asciiz "\n"
.text
main:
_main:
li $s7, 0
li $s6, 0
sw $s7, _res
sw $s6, _i
j _D2052
_D2051:
li $s7, 0
sw $s7, _j
j _D2049
_D2048:
li $s7, 0
sw $s7, _k
j _D2046
_D2045:
lw $s7, _res
addi $s7, $s7, 1
lw $s6, _k
addi $s6, $s6, 1
sw $s7, _res
sw $s6, _k
_D2046:
li $t0, 9
lw $s7, _k
sw $s7, _k
sle $s7, $s7, $t0
sw $s7, _t
lw $s7, _t
bne $s7, $zero, _D2045
j _D2047
_D2047:
lw $s7, _j
addi $s7, $s7, 1
sw $s7, _j
_D2049:
li $t0, 9
lw $s7, _j
sw $s7, _j
sle $s7, $s7, $t0
sw $s7, _t
lw $s7, _t
bne $s7, $zero, _D2048
j _D2050
_D2050:
lw $s7, _i
addi $s7, $s7, 1
sw $s7, _i
_D2052:
li $t0, 9
lw $s7, _i
sw $s7, _i
sle $s7, $s7, $t0
sw $s7, _t
lw $s7, _t
bne $s7, $zero, _D2051
j _D2053
_D2053:
li $v0, 4
la $a0, string_31
syscall
lw $s7, _res
li $v0, 1
move $a0, $s7
syscall
li $v0, 4
la $a0, string_33
syscall
li $v0, 10
syscall
