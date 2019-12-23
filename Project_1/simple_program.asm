# Sample_program.asm
# This is a program that demonstrates basic math functions

        .data
	# variables
IntPrompt:       .asciiz "Enter a integer:\n"
OutStr:          .asciiz "Your result is: "
IntIn:           .word   0

        .text
        .globl   main

main:   # start of the main procedure

# Get a second number
        li        $v0, 4                   # print_string
        la        $a0, IntPrompt           # point to IntPrompt
        syscall
        li        $v0, 5
        syscall
        move      $t0, $v0                 # move input before it gets changed


# Get a second number
        li        $v0, 4                   # print_string
        la        $a0, IntPrompt           # point to IntPrompt
        syscall
        li        $v0, 5
        syscall
        move      $t1, $v0                 # move input before it gets changed


# Get a third number
        li        $v0, 4                   # print_string
        la        $a0, IntPrompt           # point to IntPrompt
        syscall
        li        $v0, 5
        syscall
        move      $t2, $v0                 # move input before it gets changed



# END PROGRAM
	
	sub       $t3,$t0,$t1
	add       $t4,$t3,$t2
	li	  $v0,4
        la        $a0,OutStr
	syscall
	li 	  $v0,1
	move      $a0,$t4
	syscall
	li        $v0, 10                  # Exit the prograrm
	syscall



