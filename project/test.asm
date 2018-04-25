.data
string_17:	.asciiz "\n"
string_26:	.asciiz "Value of i : "
string_28:	.asciiz "\nValue of count : "
string_30:	.asciiz "\n"
.text
main:
jal _Main
li $v0, 10
syscall
_Test:
_Program:
_Main:
lw $s7, 0($sp)
addi $sp, $sp, -8
li $s6, 8
li $s5, 0
li $s6, 8
sw $s7, 0($sp)
sw $s6, 4($sp)
sw $s5, 0($sp)
label_0:
lw $s7, 4($sp)
sw $s7, 4($sp)
slti $s7, $s7, 11000
bne $s7, $zero, label_1
sw $s7, 12($sp)
j label_2
label_1:
addi $sp, $sp, -4
lw $s7, 36($sp)
li $v0, 1
move $a0, $s7
syscall
li $v0, 4
la $a0, string_17
syscall
lw $s6, 32($sp)
addi $s6, $s6, 1
sw $s6, 4($sp)
move $s6, $s6
addi $sp, $sp, 4
sw $s7, 36($sp)
sw $s6, 32($sp)
label_3:
lw $s7, 32($sp)
li $t0, 2
mult $t0, $s7
mflo $s7
j label_0
sw $s7, 32($sp)
label_2:
addi $sp, $sp, 28
li $v0, 4
la $a0, string_26
syscall
lw $s7, 4($sp)
li $v0, 1
move $a0, $s7
syscall
li $v0, 4
la $a0, string_28
syscall
lw $s6, 0($sp)
li $v0, 1
move $a0, $s6
syscall
li $v0, 4
la $a0, string_30
syscall
addi $sp, $sp, 8
jr $ra
sw $s7, 4($sp)
addi $sp, $sp, 0
