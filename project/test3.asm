.text
main:
jal _Main
li $v0, 10
syscall
_prog:
_prog_prog:
_compute_factorial:
lw $s7, 0($sp)
addi $sp, $sp, -0
li $t0, 1
sw $s7, 0($sp)
sgt $s7, $s7, $t0
bne $s7, $zero, label_0
sw $s7, -4($sp)
j label_1
label_0:
addi $sp, $sp, -4
lw $s7, 4($sp)
sw $s7, 4($sp)
addi $s7, $s7, -1
addi $sp, $sp, -4
sw $ra, 0($sp)
addi $sp, $sp, -4
sw $s7, 0($sp)
jal _compute_factorial
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s6, $v0
sw $s7, -4($sp)
sw $s6, -8($sp)
lw $s7, -4($sp)
sw $s7, -4($sp)
move $s7, $s7
li $v0, 1
move $a0, $s7
syscall
move $v0, $s7
addi $sp, $sp, 4
addi $sp, $sp, 0
addi $sp, $sp, 4
jr $ra
sw $s7, 0($sp)
addi $sp, $sp, 4
j label_2
label_1:
addi $sp, $sp, -0
li $v0, 1
addi $sp, $sp, 0
addi $sp, $sp, 0
addi $sp, $sp, 4
jr $ra
addi $sp, $sp, 0
label_2:
addi $sp, $sp, 0
addi $sp, $sp, 4
_Main:
addi $sp, $sp, -8
li $s7, 9
addi $sp, $sp, -4
sw $ra, 0($sp)
addi $sp, $sp, -4
sw $s7, 0($sp)
jal _compute_factorial
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s6, $v0
sw $s7, 4($sp)
sw $s6, -4($sp)
lw $s7, -4($sp)
sw $s7, -4($sp)
move $s7, $s7
li $v0, 1
move $a0, $s7
syscall
addi $sp, $sp, 8
jr $ra
sw $s7, 0($sp)
addi $sp, $sp, 0