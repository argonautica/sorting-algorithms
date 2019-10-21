#quick sort

# SETUP  
.data
#set the size and content of array
Sz: .word 100
Array: 7, 5, 4, 1, 6, 8, 3, 2, 9, 0, 8, 3, 2, 4, 9, 0, 6, 7, 5, 1, 1, 6, 5, 7, 4, 8, 2, 3, 9, 0, 2, 8, 5, 1, 3, 9, 6, 0, 7, 4, 5, 8, 1, 6, 0, 7, 9, 2, 3, 4, 7, 9, 0, 2, 5, 1, 8, 6, 3, 4, 2, 8, 4, 5, 0, 7, 3, 9, 6, 1, 2, 0, 3, 6, 5, 4, 7, 9, 1, 8, 5, 6, 8, 1, 3, 2, 0, 9, 7, 4, 9, 3, 2, 1, 7, 5, 6, 8, 0, 4
NL: .asciiz "\n"
.text
# Initialize List
main:
	lw $s7, Sz # get size of list
	move $s1, $zero  # set counter for # of elems printed
	move $s2, $zero  # set offset from Array
j start
quickSort:
#variable list:
#a0: left
#a1: right
#s0: i
#s1: j
#s2: tmp
#s3: pivot
#s4: array access
move $s0, $a0						#i = left
move $s1, $a1						#j = right
add $t0, $a0, $a1					#left + right
div $t0, $t0, 2						#(left + right) / 2
mul $s4, $t0, 4						#array access 
lw $s3, Array($s4)					#pivot = arr[(left + right) / 2]
outsideWhile:
	bgt $s0, $s1, outsideWhileEnd			#if i > j escape while
	#	while (arr[i] < pivot)
        #		i++;
	insideWhile1:
		mul $s4, $s0, 4
		lw $t0, Array($s4) 			#arr[i]
		bge $t0, $s3, insideWhile1End		#escape inside if arr[i] >= pivot
		addi $s0, $s0, 1			#i++
		j insideWhile1
	insideWhile1End:
	#       while (arr[j] > pivot)
        #      		j--;
	insideWhile2:
		mul $s4, $s1, 4
		lw $t0, Array($s4) 			#arr[j]
		ble $t0, $s3, insideWhile2End		#escape inside if arr[i] >= pivot
		subi $s1, $s1, 1			#i++
		j insideWhile2
	insideWhile2End:
	bgt $s0, $s1, whileIfFalse			#if (i <= j) {
		mul $s4, $s0, 4
		lw $s2, Array($s4)				#tmp = arr[i]
		
		mul $s4, $s1, 4
		lw $t0, Array($s4)				#access arr[j]
		mul $s4, $s0, 4
		sw $t0, Array($s4)				#arr[i] = arr[j]
		
		mul $s4, $s1, 4
		sw $s2, Array($s4)				#arr[j] = tmp;
		
		addi $s0, $s0, 1				#i++
		subi $s1, $s1, 1				#j--
	whileIfFalse:
	j outsideWhile
outsideWhileEnd:
bge $a0, $s1, if1False					#if left < j{
	sub $sp, $sp, 12
	sw $ra, 8($sp)
	sw $a0, 4($sp)
	sw $a1, 0($sp)
	move $a0, $a0					#left = left
	move $a1, $s1					#right = j
	jal quickSort
	lw $ra, 8($sp)
	lw $a0, 4($sp)
	lw $a1, 0($sp)
	add $sp, $sp, 12
if1False:

bge $s0, $a1, if2False
	sub $sp, $sp, 12
	sw $ra, 8($sp)
	sw $a0, 4($sp)
	sw $a1, 0($sp)
	move $a0, $s0					#left = i
	move $a1, $a1					#right = right
	jal quickSort
	lw $ra, 8($sp)
	lw $a0, 4($sp)
	lw $a1, 0($sp)
	add $sp, $sp, 12
if2False:
jr $ra

start:
addi $a0, $a0, 0
move $a1, $s7
sub $sp, $sp, 12
sw $ra, 8($sp)
sw $a0, 4($sp)
sw $a1, 0($sp)
jal quickSort
lw $ra, 8($sp)
lw $a0, 4($sp)
lw $a1, 0($sp)
add $sp, $sp, 12

# main print loop
move $s1, $zero
move $s2, $zero
print_loop:
	bge $s1, $s7, print_loop_end # stop after last elem is printed
	lw $a0, Array($s2)  # print next value from the list
	li $v0, 1
	syscall
	la $a0, NL # print a newline
	li $v0, 4
	syscall
	addi $s1, $s1, 1  # increment the loop counter
	addi $s2, $s2, 4  # step to the next array elem

	j print_loop # repeat the loop
print_loop_end:
