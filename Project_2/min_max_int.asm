# Sample_program.asm
# This is a program that goes through an array and find the highest and lowest numbers

		.data

small_str: 	.asciiz 	"The smallest number is: "	   #string printout for smallest number
big_str:	.asciiz		"\nThe largest number is: "	   #string printout for largest number
arr: 		.word 		5, 7, 12, 3, 4, 9, 6, 11, 2, 10    #array of numbers
arr_len: 	.word 		10               		   #number of elements

		.text
		.globl main
		main:  

	la 	$s0,arr 		
	addi	$s1,$s0,40
	
	lw	$s2,0($s0)		
	lw 	$s3,0($s0)		

Loop:
	beq 	$s0,$s1,results		
	lw	$t0,0($s0)
	j	move_array
move_array:
	addi    $s0,$s0,4               
	j	check_stats
check_stats:
    	slt     $t2,$t0,$s2              
   	bne     $t2,$zero,minNumber      
    	sgt     $t2,$t0,$s3		
   	bne     $t2,$zero,maxNumber	  
	j	Loop
minNumber:
	move	$s2,$t0
	j 	Loop
maxNumber:
	move	$s3,$t0
	j	Loop
displayMin:
	li      $v0,4
	la      $a0,small_str
    	syscall
   	li      $v0,1
   	move    $a0,$s2                 # get min value
   	syscall
	j	displayMax
displayMax:
	li      $v0,4
   	la      $a0,big_str
   	syscall
   	li      $v0,1
   	move    $a0,$s3                 # get max value
   	syscall
	j exit
results:
	j displayMin
exit:
	li      $v0,10 		    # exits the program
   	syscall





