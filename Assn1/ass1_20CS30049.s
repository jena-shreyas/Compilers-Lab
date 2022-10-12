# Assignment 1
# Shreyas Jena - 20CS30049

	.file	"asgn1.c"										# this is the name of the source file
	.text													# this is the start of code section
	.section	.rodata										# this indicates start of read-only data section
	.align 8												# aligning data to 8-byte boundary for efficient memory access
.LC0:														# Label of format string for input prompt
	.string	"Enter the string (all lower case): "			 
.LC1:														# Label of format string for scanf
	.string	"%s"											
.LC2:														# Label of format string for printing string length
	.string	"Length of the string: %d\n"					
	.align 8												# does 8-byte boundary alignment of data
.LC3:														# Label of format string for printing string input in descending order
	.string	"The string in descending order: %s\n"			
	.text													# start of code section


	.globl	main											# this specifies that main is globally visible in the executable
	.type	main, @function									# defines type of main - a function
# int main()
main:														# start of main
.LFB0:														# Label for Function Beginning (main)
	.cfi_startproc
	endbr64
	pushq	%rbp											# pushes current value of %rbp on stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# rbp <-- rsp, moves address of stack top (referenced by rsp) to rbp.
															# till this function call ends (or some new function is called within this function body), the address stored by rbp remains fixed. 
	.cfi_def_cfa_register 6
	subq	$80, %rsp										# rsp <-- rsp - 80, allocates 80 bytes space on stack for local variables
	movq	%fs:40, %rax									# segment addressing
	movq	%rax, -8(%rbp)									# M[rbp-8] <-- rax
	xorl	%eax, %eax										# erase eax value

# printf("Enter the string (all lower case): ");
	leaq	.LC0(%rip), %rdi								# load effective address of format string for input prompt (.LC0) into rdi 
															# This string will be the argument passed to printf function.

	movl	$0, %eax										# set value of eax to 0
															# since printf takes variable no. of arguments, %al (part of %eax) holds the no. of vector registers used to store arguments
															# since printf takes no other argument than format string, eax = 0

	call	printf@PLT										# call printf function

# scanf("%s", str);
	leaq	-64(%rbp), %rax									# load effective address -64(%rbp) into rax. This is the starting address of 'str'.
	movq	%rax, %rsi										# move starting address of 'str' to rsi. This is passed as 2nd argument to scanf function.
	leaq	.LC1(%rip), %rdi								# load effective address of format string for scanf (.LC1) into rdi. This is the 1st argument passed to scanf function.
	movl	$0, %eax										# set eax to 0
	call	__isoc99_scanf@PLT								# call scanf function

# len = length(str); 
	leaq	-64(%rbp), %rax									# load effective address -64(%rbp) into rax. This is the starting address of 'str'.
	movq	%rax, %rdi										# move starting address of 'str' to rdi. This is passed as the 1st argument to length function.
	call	length											# call length function
	movl	%eax, -68(%rbp)									# move 'len' value from eax to address -68(%rbp)

# printf("Length of the string: %d\n", len);
	movl	-68(%rbp), %eax									# load value of 'len' from -68(%rbp) into eax
	movl	%eax, %esi										# move value of 'len' to esi. This is passed as the 2nd argument to printf function.
	leaq	.LC2(%rip), %rdi								# load e ffective address of format string for printing string length (see .LC2) into rdi register. This will be the 1st argument passed to printf function.
	movl	$0, %eax										# set value of eax register to 0
	call	printf@PLT										# call printf function

# sort(str, len, dest);
	leaq	-32(%rbp), %rdx									# load effective address -32(%rbp) (starting address of 'dest') into rdx. This is the 3rd argument passed to sort function.
	movl	-68(%rbp), %ecx									# load value of 'len' from address -68(%rbp) into ecx.
	leaq	-64(%rbp), %rax									# load effective address -64(%rbp) (starting address of 'str') into rax.
	movl	%ecx, %esi										# move value of 'len' to esi. This is the 2nd argument to sort function.
	movq	%rax, %rdi										# move address of 'str' to rdi. This is the 1st argument to sort function.
	call	sort											# call sort function

# printf("Sorted string: %s\n", dest);
	leaq	-32(%rbp), %rax									# load effective address -32(%rbp) (starting address of 'dest') into rax.
	movq	%rax, %rsi										# move address of 'dest' to rsi. This is the 2nd argument to printf function.
	leaq	.LC3(%rip), %rdi								# load effective address of format string for printing sorted string (.LC3) into rdi. This is the 1st argument passed to printf function.
	movl	$0, %eax										# set eax to 0
	call	printf@PLT										# call printf function

# return 0;
	movl	$0, %eax										# load value 0 in 'eax' (return value of main)

	movq	-8(%rbp), %rcx									# rcx <-- M[rbp - 8]
	xorq	%fs:40, %rcx									# take xor; if output = 0, then it implies no stack overflow, and program is successfully executed
	je	.L3													# if output = 0, then jump to .L3 and end main
	call	__stack_chk_fail@PLT
.L3:
	leave													# copies %rsp <-- %rbp and pops old value of %rbp from stack
	.cfi_def_cfa 7, 8
	ret														# transfers control back to return address
	.cfi_endproc
.LFE0:														# Label for Function End
	.size	main, .-main									# specifies size of 'main' function



	.globl	length											# specifies that 'length' is globally visible in the executable
	.type	length, @function								# defines type of 'length' - a function

# int length(char str[20])
length:														# start of 'length'
.LFB1:														# Label for Function Begin (length)
	.cfi_startproc
	endbr64
	pushq	%rbp											# pushes current value of %rbp on stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# rbp <-- rsp, moves address of stack top (referenced by rsp) to rbp.
	.cfi_def_cfa_register 6

	movq	%rdi, -24(%rbp)									# moves starting address of 1st argument ('str') to stack at -24(%rbp)			

# for (i = 0; str[i] != '\0'; i++)
	movl	$0, -4(%rbp)									# initialize loop counter 'i' to zero, store it in address -4(%rbp)
	jmp	.L5													# unconditional jump to label .L5 (loop body)

.L6:														# label for loop increment
	addl	$1, -4(%rbp)									# increment loop counter 'i' by 1 after each iteration

.L5:														# label for loop body
	movl	-4(%rbp), %eax									# move current value of 'i' to eax
	movslq	%eax, %rdx										# does rdx <-- edx (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves starting address of 'str', stored at -24(%rbp), to rax 
	addq	%rdx, %rax										# rax <-- rax + rdx (rax now points to str[i])
	movzbl	(%rax), %eax									# moves value str[i] (byte) (referenced by %rax) to eax (long) with zero extension

	testb	%al, %al										# since size of i'th character is 1 byte, it is stored in %al part of eax.
															# If al = '\0', bitwise value = 0, hence testb (AND operation of al on itself) returns 0.

	jne	.L6													# if al != 0, jump to label .L6 (run loop body again)
# return i;
	movl	-4(%rbp), %eax									# store final value of 'i' (string length) in eax (return value of length function)
	popq	%rbp											# pop address stored by rbp from stack frame of length function
	.cfi_def_cfa 7, 8
	ret														# transfers control back to return address
	.cfi_endproc
.LFE1:
	.size	length, .-length								# specifies size of 'length' function


	.globl	sort											# specifies that 'sort' is globally visible in the executable
	.type	sort, @function									# defines type of 'sort' - a function

# void sort(char str[20], int len, char dest[20])
sort:
.LFB2:														# Label for Function Begin (sort)
	.cfi_startproc
	endbr64
	pushq	%rbp											# pushes current value of %rbp on stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# rbp <-- rsp, moves address of stack top (referenced by rsp) to rbp.
	.cfi_def_cfa_register 6
	subq	$48, %rsp										# rsp <-- rsp - 48 (48 bytes of stack space is allocated for local variables)
	movq	%rdi, -24(%rbp)									# moves starting address of 1st argument ('str') to stack at -24(%rbp)
	movl	%esi, -28(%rbp)									# moves value of 'len' to stack at -28(%rbp)
	movq	%rdx, -40(%rbp)									# moves starting address of 3rd argument ('dest') to stack at -40(%rbp)

# for (i = 0; i < len; i++)
	movl	$0, -8(%rbp)									# initialize loop counter 'i' to zero, store it in address -8(%rbp)
	jmp	.L9													# unconditional jump to label .L9

# for (j = 0; j < len; j++)
.L13:														# label for inner loop increment
	movl	$0, -4(%rbp)									# initialize loop counter 'j' to zero, store it in address -4(%rbp)
	jmp	.L10												# unconditional jump to label .L10

.L12:													/	# label for inner loop body
	movl	-8(%rbp), %eax									# moves value of 'i' (stored at -8(%rbp)) to eax
	movslq	%eax, %rdx										# moves value of 'i' as :- rdx <-- eax (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves 'str''s starting address, stored at -24(%rbp), to rax
	addq	%rdx, %rax										# rax <-- rax + rdx (rax now points to str[i])	
	movzbl	(%rax), %edx									# move char value str[i] (byte) to edx (long) with zero extension
	movl	-4(%rbp), %eax									# move value of j (stored at -4(%rbp)) to eax
	movslq	%eax, %rcx										# moves value of j as :- rcx <-- eax (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves 'str''s starting address, stored at -24(%rbp), to rax
	addq	%rcx, %rax										# rax <-- rax + rcx (rax now points to str[j])	
	movzbl	(%rax), %eax									# move char value of str[j] (byte) to eax (long) with zero extension

# if (str[i] < str[j])
	                                                        # now %al stores str[j], %dl stores str[i]
	cmpb	%al, %dl										# compare str[i] with str[j]
	jge	.L11												# if str[i] >= str[j], jump to label .L11 (i.e., increment j)
	movl	-8(%rbp), %eax									# move value of i (stored at -8(%rbp)) to eax
	movslq	%eax, %rdx										# moves value of i as :- rdx <-- eax (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves 'str''s starting address, stored at -24(%rbp), to rax
	addq	%rdx, %rax										# rax <-- rax + rdx (rax now points to str[i])
	movzbl	(%rax), %eax									# move char value of str[i] (byte) to eax (long) with zero extension

# temp = str[i]
	movb	%al, -9(%rbp)									# assigns temp <-- str[i], where temp stored at address -9(%rbp)

	movl	-4(%rbp), %eax									# move j's current value (stored at -4(%rbp)) to eax
	movslq	%eax, %rdx										# moves j's current value as :- rdx <-- eax (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves str's starting address, stored at -24(%rbp), to rax
	addq	%rdx, %rax										# rax <-- rax + rdx (rax now points to j'th character of 'str')
	movl	-8(%rbp), %edx									# move i's current value (stored at -8(%rbp)) to edx
	movslq	%edx, %rcx										# moves i's current value as :- rcx <-- edx (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rdx									# moves str's starting address, stored at -24(%rbp), to rdx
	addq	%rcx, %rdx										# rdx <-- rdx + rcx (rdx now points to i'th character of 'str')
	movzbl	(%rax), %eax									# move value of str's j'th character (byte) to register eax (long) with zero extension

# str[i] = str[j]
	movb	%al, (%rdx)										# assigns str[i] <-- str[j], where address of str[i] is stored in rdx and %al stores str[j]

	movl	-4(%rbp), %eax									# move j's current value (stored at -4(%rbp)) to eax
	movslq	%eax, %rdx										# moves j's current value as :- rdx <-- eax (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax									# moves char array 'str''s starting address, stored at -24(%rbp), to rax
	addq	%rax, %rdx										# rdx <-- rdx + rax (rdx now points to j'th character of 'str')
	movzbl	-9(%rbp), %eax									# move temp's current value (i.e., str[i]), stored at -9(%rbp) to eax

# str[j] = temp
	movb	%al, (%rdx)										# assigns str[j] <-- temp, where str[j] is referenced by rdx and %al stores temp
.L11:														# Label for inner loop increment
# j++;
	addl	$1, -4(%rbp)									# increment j by 1
.L10:														# Label for inner loop condition check (i.e., j < len)
	movl	-4(%rbp), %eax									# move j's current value (stored at -4(%rbp)) to eax
	cmpl	-28(%rbp), %eax									# compare 'len' (stored at -28(%rbp)) with j

	jl	.L12												# if j < len, re-enter inner loop body
	addl	$1, -8(%rbp)									# if inner loop is complete, increment i by 1
.L9:
	movl	-8(%rbp), %eax									# move i's current value (stored at -8(%rbp)) to eax
	cmpl	-28(%rbp), %eax									# compare 'len' (stored at -28(%rbp)) with i

	jl	.L13												# if i < len, re-enter outer loop body	

# if outer loop complete		
	movq	-40(%rbp), %rdx									# move starting address of 'dest' (stored at -40(%rbp)) to rdx (3rd argument of reverse function)
	movl	-28(%rbp), %ecx									# move 'len' value (stored at -28(%rbp)) to ecx
	movq	-24(%rbp), %rax									# move starting address of char array 'str' (stored at -24(%rbp)) to rax
	movl	%ecx, %esi										# move 'len' value in ecx to esi (2nd argument of reverse function)
	movq	%rax, %rdi										# move starting address of 'str' (stored in rax) to rdi (1st argument of reverse function)

# reverse(str, len, dest);
	call	reverse											# call reverse function		
	nop														# does nothing
	leave													# this copies %rsp <-- %rbp and pops old value of %rbp from stack
	.cfi_def_cfa 7, 8										
	ret														# transfers control back to return address
	.cfi_endproc
.LFE2:														# Label for Function End (sort)
	.size	sort, .-sort									# specifies the size of 'sort' function as {.(current address) - address of sort}


	.globl	reverse											# this specifies that reverse is globally visible in the executable
	.type	reverse, @function								# defines type of reverse - a function

# void reverse(char str[20], int len, char dest[20])
reverse:													# start of reverse
.LFB3:														# Label for Function Begin (reverse)
	.cfi_startproc
	endbr64
	pushq	%rbp											# pushes current value of %rbp on stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# rbp <-- rsp, moves address of stack top (referenced by rsp) to rbp.
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)									# moves address of 1st argument ('str') to stack frame at address -24(%rbp)
	movl	%esi, -28(%rbp)									# moves address of 2nd argument ('len') to stack frame at address -28(%rbp)
	movq	%rdx, -40(%rbp)									# moves address of 3rd argument ('dest') to stack frame at address -40(%rbp)
	movl	$0, -8(%rbp)									# initialize loop counter 'i' to zero, store it in address -8(%rbp)
	jmp	.L15												# unconditional jump to .L15

.L20:														# Label for outer loop body
	movl	-28(%rbp), %eax									# move 'len' value (stored at -28(%rbp)) to eax
	subl	-8(%rbp), %eax									# subtract i's value (stored at -8(%rbp)) from len and store at eax
	subl	$1, %eax										# subtract 1 from len - i and store to eax

# for (j = len - i - 1; j >= len / 2; j--) (Inner loop)
	movl	%eax, -4(%rbp)									# move eax's value (len-i-1) to j (stored at -4(%rbp))
	nop														# does nothing
	movl	-28(%rbp), %eax									# move 'len' value (stored at -28(%rbp)) to eax
	movl	%eax, %edx										# move 'len' value to edx
	shrl	$31, %edx										# shift 'len' value by 31 bits right, store to edx (get sign bit)
	addl	%edx, %eax										# add eax <-- eax + edx
	sarl	%eax											# right shift eax by 1 bit (i.e., compute len/2)
	cmpl	%eax, -4(%rbp)									# compare j with len/2
	jl	.L18												# if j < len/2, jump to .L18 to increment i
	movl	-8(%rbp), %eax									# move i's value (stored at -8(%rbp)) to eax
	cmpl	-4(%rbp), %eax									# compare i with j

# if (i == j)
	je	.L23												# if i == j, jump to .L23 (break inner loop)
	movl	-8(%rbp), %eax									# move i's value (stored at -8(%rbp)) to eax
	movslq	%eax, %rdx										# move i's value to rdx (sign extend)
	movq	-24(%rbp), %rax									# move address of str to rax
	addq	%rdx, %rax										# add rax <-- rax + rdx (rax now points to str[i])
	movzbl	(%rax), %eax									# move value of str[i] (byte) to eax (long)

# temp = str[i];
	movb	%al, -9(%rbp)									# store %al (value of str[i]) to -9(%rbp) (temp)
	movl	-4(%rbp), %eax									# move j's value (stored at -4(%rbp)) to eax
	movslq	%eax, %rdx										# move j's value to rdx (sign extend)
	movq	-24(%rbp), %rax									# move starting address of str to rax
	addq	%rdx, %rax										# add rax <-- rax + rdx (rax now points to str[j])
	movl	-8(%rbp), %edx									# move i's value (stored at -8(%rbp)) to edx
	movslq	%edx, %rcx										# move i's value to rcx (sign extend)
	movq	-24(%rbp), %rdx									# move starting address of str to rdx
	addq	%rcx, %rdx										# add rdx <-- rdx + rcx (rdx now points to str[i])
	movzbl	(%rax), %eax									# move value of str[j] (byte) to eax (long)

# str[i] = str[j];
	movb	%al, (%rdx)										# move value of str[j] to location of str[i] (referenced by rdx)
	movl	-4(%rbp), %eax									# move j's value (stored at -4(%rbp)) to eax
	movslq	%eax, %rdx										# move j's value to rdx (sign extend)
	movq	-24(%rbp), %rax									# move starting address of str to rax
	addq	%rax, %rdx										# add rdx <-- rdx + rax (rdx now points to str[j])
	movzbl	-9(%rbp), %eax									# move value of temp to eax (long)

# str[j] = temp;
	movb	%al, (%rdx)										# move value of temp (byte) to location of str[j] (referenced by rdx)
# break;
	jmp	.L18												# unconditional jump to .L18 to break inner loop and increment i
.L23:
	nop														# does nothing
.L18:
# i++;
	addl	$1, -8(%rbp)									# increment i by 1 and store at -8(%rbp)

# for (i = 0; i < len / 2 ; i++) (Outer loop)
.L15:
	movl	-28(%rbp), %eax									# moves 'len' value (stored at -28(%rbp)) to eax
	movl	%eax, %edx										# moves 'len' value to edx
	shrl	$31, %edx										# shift 'len' value by 31 bits right, store to edx (get sign bit)
	addl	%edx, %eax										# add eax <-- eax + edx
	sarl	%eax											# right shift eax by 1 bit (i.e., compute len/2)
	cmpl	%eax, -8(%rbp)									# compare i with len/2
	jl	.L20												# if i < len/2, jump to .L20 to enter outer loop body

	movl	$0, -8(%rbp)									# set i to 0 and store at -8(%rbp)
	                                                        # This will initialize i to 0 as the start condition for 3rd (not nested) loop
	jmp	.L21												# unconditional jump to .L21 to execute 3rd loop
.L22:
	movl	-8(%rbp), %eax									# move i's value (stored at -8(%rbp)) to eax
	movslq	%eax, %rdx										# move i's value to rdx (sign extend)
	movq	-24(%rbp), %rax									# move starting address of str to rax
	addq	%rdx, %rax										# add rax <-- rax + rdx (rax now points to str[i])
	movl	-8(%rbp), %edx									# move i's value (stored at -8(%rbp)) to edx
	movslq	%edx, %rcx										# move i's value to rcx (sign extend)
	movq	-40(%rbp), %rdx									# move starting address of 'dest' to rdx
	addq	%rcx, %rdx										# add rdx <-- rdx + rcx (rdx now points to dest[i])
	movzbl	(%rax), %eax									# move value of str[i] (byte) to eax (long)

# dest[i] = str[i];
	movb	%al, (%rdx)										# move value of str[i] to location of dest[i] (referenced by rdx)
# i++ (in 3rd loop)
	addl	$1, -8(%rbp)									# increment i by 1 and store at -8(%rbp)

# for (i = 0; i < len; i++) (3rd loop)
.L21:
	movl	-8(%rbp), %eax									# move i's value (stored at -8(%rbp)) to eax
	cmpl	-28(%rbp), %eax									# compare i with len
	jl	.L22												# if i < len, jump to .L22 to enter loop body
	nop														# does nothing
	nop														# does nothing
	popq	%rbp											# pop rbp from call stack					
	.cfi_def_cfa 7, 8
	ret														# transfers control back to return address
	.cfi_endproc
.LFE3:														# Label for Function End (reverse)
	.size	reverse, .-reverse								# defines size of reverse function


	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
