.data
_a:	.space 20
_c:	.word 0
_d_siz:	.word 0
_default_ret:	.word 0
_i:	.word 0
_j:	.word 0
_minElement:	.word 0
_minIndex:	.word 0
_siz:	.word 0
_source:	.word 0
_source_index:	.word 0
_target:	.word 0
_temp:	.word 0
_x:	.word 0
string_1:	.asciiz "Insert sort:\n"
string_5:	.asciiz "Enter elements of array :\n"
string_19:	.asciiz " replaced by "
string_21:	.asciiz "->"
string_23:	.asciiz "\n"
string_34:	.asciiz " "
string_38:	.asciiz "\n"
.text
main:
li $v0, 4
la $a0, string_1
syscall
li $s7, 5
li $s6, -1
li $v0, 4
la $a0, string_5
syscall
li $s5, 0
sw $s7, _siz
sw $s6, _default_ret
sw $s5, _i
_read_a:
li $v0, 5
syscall
sw $v0, _c
lw $s7, _i
sll $t0, $s7, 2
lw $s6, _c
sw $s6, _a($t0)
addi $s7, $s7, 1
lw $s5, _siz
sw $s7, _i
slt $s7, $s7, $s5
sw $s7, _x
sw $s6, _c
lw $s7, _x
bne $s7, $zero, _read_a
li $s6, 0
sw $s6, _i
_outer_loop:
jal _find_replacement
move $s7, $v0
sll $t0, $s7, 2
lw $s6, _a($t0)
lw $s5, _i
sll $t0, $s5, 2
lw $s4, _a($t0)
li $v0, 1
move $a0, $s4
syscall
li $v0, 4
la $a0, string_19
syscall
li $v0, 1
move $a0, $s7
syscall
li $v0, 4
la $a0, string_21
syscall
li $v0, 1
move $a0, $s6
syscall
li $v0, 4
la $a0, string_23
syscall
sll $t0, $s5, 2
sw $s6, _a($t0)
sll $t0, $s7, 2
sw $s4, _a($t0)
addi $s5, $s5, 1
lw $s3, _siz
sw $s3, _siz
addi $s3, $s3, -1
sw $s5, _i
slt $s5, $s5, $s3
sw $s7, _source_index
sw $s6, _source
sw $s5, _x
sw $s4, _target
sw $s3, _d_siz
lw $s7, _x
bne $s7, $zero, _outer_loop
li $s6, 0
sw $s6, _i
_print_array:
lw $s7, _i
sll $t0, $s7, 2
lw $s6, _a($t0)
li $v0, 1
move $a0, $s6
syscall
li $v0, 4
la $a0, string_34
syscall
addi $s7, $s7, 1
lw $s5, _siz
sw $s7, _i
slt $s7, $s7, $s5
sw $s7, _x
sw $s6, _c
lw $s7, _x
bne $s7, $zero, _print_array
li $v0, 4
la $a0, string_38
syscall
li $v0, 10
syscall
_find_replacement:
lw $s7, _i
addi $s6, $s7, 1
move $s5, $s7
sw $s7, _i
sll $t0, $s7, 2
lw $s7, _a($t0)
sw $s7, _minElement
sw $s6, _j
sw $s5, _minIndex
_inner_loop:
lw $s7, _j
sw $s7, _j
sll $t0, $s7, 2
lw $s7, _a($t0)
lw $s6, _minElement
sw $s7, _temp
slt $s7, $s7, $s6
sw $s7, _x
lw $s7, _x
bne $s7, $zero, _setMinIndex
_inner_loop_continued:
lw $s6, _j
addi $s6, $s6, 1
lw $s5, _siz
slt $s7, $s6, $s5
sw $s7, _x
sw $s6, _j
lw $s7, _x
bne $s7, $zero, _inner_loop
lw $s7, _minIndex
move $v0, $s7
jr $ra
_setMinIndex:
lw $s6, _j
move $s7, $s6
lw $s5, _temp
sw $s5, _temp
move $s5, $s5
sw $s7, _minIndex
sw $s5, _minElement
j _inner_loop_continued
