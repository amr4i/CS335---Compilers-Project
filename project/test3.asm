.data
string_8:	.asciiz "i am a string"
.text
main:
jal _Main
li $v0, 10
syscall
_Rextester:
_Program:
_Program_Program:
_Main:
addi $sp, $sp, -4
li $s7, 10
li $v0, 4
la $a0, string_8
syscall
li $v0, 1
move $a0, $s7
syscall
li $v0 1
li $a0, 10
syscall
addi $sp, $sp, 4
jr $ra
sw $s7, 0($sp)
addi $sp, $sp, 0
