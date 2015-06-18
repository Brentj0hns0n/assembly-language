##########################################################################
# Brent C Johnson, CS 2318-002, Assignment 2 Part 1 Program A
############################ data segment ################################
#  This simple program reads three user input types and 
# displays them back.  The types are int, string, and char



		.data
promptInt:      .asciiz "Howdy there, please enter an integer"
promptString:	.asciiz "ok, now enter a string up to 25 characters...  please. "
promptChar:	.asciiz "Finally, please enter a char. "
promptEnter:    .asciiz "you entered: "
		.align 3
intInMem:       .space 4
stringInMem:    .space 26
charInMem:      .space 1
		
		.text
		.globl main 

############################ code segment ################################

main:
		li $v0, 4
		la $a0, promptInt
		syscall      
		li $v0, 11		
		li $a0, '\n'
		syscall

		li $v0, 5		
		syscall
		move $t1, $v0
		la $t0, intInMem
		sw $t1, 0($t0)	
		
		li $v0, 4
		la $a0, promptEnter
		syscall
		li $v0, 1
		lw $a0, 0($t0)
		syscall
		li $v0, 11		
		li $a0, '\n'
		syscall


		li $v0, 4
		la $a0, promptString
		syscall      
		li $v0, 11		
		li $a0, '\n'
		syscall

		li $v0, 8		
		la $a0, stringInMem	
		li $a1, 26		
		syscall
		
		
		li $v0, 4
		la $a0, promptEnter
		syscall
		
		li $v0, 4
		la $a0, stringInMem
		syscall

		li $v0, 4
		la $a0, promptChar
		syscall      
		li $v0, 11		
		li $a0, '\n'
		syscall

		li $v0, 12		
		syscall
		move $t1, $v0
		la $t0, charInMem
		sb $t1, 0($t0)	
		
		li $v0, 4
		la $a0, promptEnter
		syscall
		li $v0, 11
		lb $a0, 0($t0)
		syscall
		
		li $v0, 10           
		syscall
		
		
		
		
	
