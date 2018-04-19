.data
_tVar_1:	.word 0
_tVar_3:	.word 0
_tVar_4:	.word 0
_tVar_6:	.word 0
_tVar_7:	.word 0
_isLeap:	.word 0
_tVar_9:	.word 0
_y:	.word 0
_tVar_0:	.word 0
_tVar_2:	.word 0
_tVar_5:	.word 0
_tVar_8:	.word 0
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
li $v0, 2018
jr $ra
_leap:
lw $s7, _y
lw $s7, 0($sp)
addi $sp, $sp, 4
li $t0, 4
div $s7, $t0
mfhi $s6
li $t0, 0
sw $s6, _tVar_0
seq $s6, $s6, $t0
li $t0, 100
div $s7, $t0
mfhi $s5
li $t0, 0
sw $s5, _tVar_2
sne $s5, $s5, $t0
sw $s6, _tVar_1
and $s6, $s6, $s5
sw $s7, _y
li $t0, 400
div $s7, $t0
mfhi $s7
li $t0, 0
sw $s7, _tVar_5
seq $s7, $s7, $t0
sw $s6, _tVar_4
or $s6, $s6, $s7
bne $s6, $zero, label_0
j label_1
label_0:
li $v0, 1
jr $ra
j label_2
label_1:
li $v0, 0
jr $ra
label_2:
_Main:
addi $sp, $sp, -4
sw $ra, 0($sp)
jal _readdata
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s7, $v0
lw $s7, _tVar_8
sw $s7, _tVar_8
move $s7, $s7
addi $sp, $sp, -4
sw $ra, 0($sp)
addi $sp, $sp, -4
li $t0, 2016
sw $t0, 0($sp)
jal _leap
lw $ra, 0($sp)
addi $sp, $sp, 4
move $s6, $v0
li $v0, 1
move $a0, $s6
syscall
sw $s7, _y1
lw $s7, _tVar_9
sw $s7, _tVar_9
move $s7, $s7
jr $ra
sw $s7, _isLeap