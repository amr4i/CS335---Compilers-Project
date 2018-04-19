.data
_tVar_1:	.byte 1
_tVar_3:	.byte 1
_tVar_4:	.byte 1
_tVar_6:	.byte 1
_tVar_7:	.byte 1
_isLeap:	.byte 1
_tVar_9:	.byte 1
_y:	.word 0
_tVar_0:	.word 0
_tVar_2:	.word 0
_tVar_5:	.word 0
_tVar_8:	.word 0
_y1:	.word 0
.text
main:
j _Main
_Program:
_leapyear:
_leapyear_leapyear:
_readdata:
lw $ra, 0($sp)
addi $sp, $sp, 4
li $v0, 2018
li $v0, 1
li $a0, 5
syscall
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
lw $s7, _tVar_7
bne $s7, $zero, label_0
j label_1
label_0:
lw $ra, 0($sp)
addi $sp, $sp, 4
li $v0, 1
jr $ra
j label_2
label_1:
lw $ra, 0($sp)
addi $sp, $sp, 4
li $v0, 0
jr $ra
label_2:
_Main:
li $v0, 1
li $a0, 1
syscall
addi $sp, $sp, -4
sw $ra, 0($sp)
jal _readdata
move $s7, $v0
li $v0, 1
li $a0, 2
syscall
sw $s7, _tVar_8
move $s7, $s7
addi $sp, $sp, -4
li $t0, 2016
sw $t0, 0($sp)
sw $s7, _y1
addi $sp, $sp, -4
sw $ra, 0($sp)
jal _leap
li $v0, 1
li $a0, 3
syscall
move $s7, $v0
sw $s7, _tVar_9
move $s7, $s7
sw $s7, _isLeap
li $v0, 1
li $a0, 4
syscall
