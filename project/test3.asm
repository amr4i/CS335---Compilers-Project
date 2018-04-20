.data
_tVar_1:	.word 0
_tVar_3:	.word 0
_tVar_4:	.word 0
_tVar_6:	.word 0
_tVar_7:	.word 0
_isLeap:	.word 0
_tVar_9:	.word 0
_x:	.word 0
_y:	.word 0
_tVar_0:	.word 0
_tVar_2:	.word 0
_tVar_5:	.word 0
_tVar_8:	.word 0
_x1:	.word 0
_y1:	.word 0
.text
main:
jal _Main
li $v0, 10
syscall
_Program:
_leapyear:
_leapyear_leapyear:
_readdata:
addi $sp, $sp, -0
li $v0, 2018
addi $sp, $sp, 0
addi $sp, $sp, 0
jr $ra
addi $sp, $sp, 0
addi $sp, $sp, 0
_leap:
lw $s7, _x
lw $s7, 0($sp)
addi $sp, $sp, 4
lw $s6, _y
lw $s6, 0($sp)
addi $sp, $sp, 4
addi $sp, $sp, -0
li $t0, 4
div $s6, $t0
mfhi $s5
li $t0, 0
sw $s5, _tVar_0
seq $s5, $s5, $t0
li $t0, 100
div $s6, $t0
mfhi $s4
li $t0, 0
sw $s4, _tVar_2
sne $s4, $s4, $t0
sw $s5, _tVar_1
and $s5, $s5, $s4
sw $s6, _y
li $t0, 400
div $s6, $t0
mfhi $s6
li $t0, 0
sw $s6, _tVar_5
seq $s6, $s6, $t0
sw $s5, _tVar_4
or $s5, $s5, $s6
bne $s5, $zero, label_0
sw $s7, _x
j label_1
label_0:
addi $sp, $sp, -0
li $v0, 1
addi $sp, $sp, 0
addi $sp, $sp, 0
addi $sp, $sp, 8
jr $ra
addi $sp, $sp, 0
j label_2
label_1:
addi $sp, $sp, -0
li $v0, 0
addi $sp, $sp, 0
addi $sp, $sp, 0
addi $sp, $sp, 8
jr $ra
addi $sp, $sp, 0
label_2:
addi $sp, $sp, 0
addi $sp, $sp, 8
_Main:
addi $sp, $sp, -12
addi $sp, $sp, -4
sw $ra, 0($sp)
jal _readdata
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s7, $v0
lw $s7, _tVar_8
sw $s7, _tVar_8
move $s7, $s7
li $s6, 2
addi $sp, $sp, -4
sw $ra, 0($sp)
addi $sp, $sp, -4
sw $s7, 0($sp)
addi $sp, $sp, -4
sw $s6, 0($sp)
jal _leap
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s5, $v0
sw $s7, _y1
sw $s6, _x1
lw $s7, _tVar_9
sw $s7, _tVar_9
move $s7, $s7
addi $sp, $sp, 12
jr $ra
sw $s7, _isLeap
addi $sp, $sp, 0
