	.globl	TWO
	.data
	.align	4
	.type	TWO, @object
	.size	TWO, 4
TWO:
	.long	2
.section	.rodata
.LC0:
	.string "TEST 2 COMPLETED\n"
# printStr: 
# printInt: 
# readInt: 
# t0 = 2
# TWO = t0
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$304, %rsp
# t1 = 97
	movb	$57, -17(%rbp)
# ch = t1
	movl	-17(%rbp), %eax
	movl	%eax, -18(%rbp)
# t2 = 69
	movb	$54, -35(%rbp)
# param t2
# t3 = call printStr, 1
	movq	-35(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -39(%rbp)
	addq	$1, %rsp
# t4 = &err
	leaq	-30(%rbp), %rax
	movq	%rax, -47(%rbp)
# param t4
# t5 = call readInt, 1
	movq	-47(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -51(%rbp)
	addq	$4, %rsp
# a = t5
	movl	-51(%rbp), %eax
	movl	%eax, -22(%rbp)
# t6 = 69
	movb	$54, -52(%rbp)
# param t6
# t7 = call printStr, 1
	movq	-52(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -56(%rbp)
	addq	$1, %rsp
# t8 = &err
	leaq	-30(%rbp), %rax
	movq	%rax, -60(%rbp)
# param t8
# t9 = call readInt, 1
	movq	-60(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -64(%rbp)
	addq	$4, %rsp
# b = t9
	movl	-64(%rbp), %eax
	movl	%eax, -26(%rbp)
# t10 = 84
	movb	$56, -65(%rbp)
# param t10
# t11 = call printStr, 1
	movq	-65(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -69(%rbp)
	addq	$1, %rsp
# param a
# t12 = call printInt, 1
	movq	-22(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -77(%rbp)
	addq	$4, %rsp
# t13 = 92
	movb	$57, -78(%rbp)
# param t13
# t14 = call printStr, 1
	movq	-78(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -82(%rbp)
	addq	$1, %rsp
# t15 = 84
	movb	$56, -83(%rbp)
# param t15
# t16 = call printStr, 1
	movq	-83(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -87(%rbp)
	addq	$1, %rsp
# param b
# t17 = call printInt, 1
	movq	-26(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -91(%rbp)
	addq	$4, %rsp
# t18 = 92
	movb	$57, -92(%rbp)
# param t18
# t19 = call printStr, 1
	movq	-92(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -96(%rbp)
	addq	$1, %rsp
# t20 = b * TWO
	movl	-26(%rbp), %eax
	imull	TWO(%rip), %eax
	movl	%eax, -132(%rbp)
# t21 = a + t20
	movl	-22(%rbp), %eax
	movl	-132(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -136(%rbp)
# p = t21
	movl	-136(%rbp), %eax
	movl	%eax, -100(%rbp)
# t22 = b * TWO
	movl	-26(%rbp), %eax
	imull	TWO(%rip), %eax
	movl	%eax, -140(%rbp)
# t23 = a - t22
	movl	-22(%rbp), %edx
	movl	-140(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -144(%rbp)
# q = t23
	movl	-144(%rbp), %eax
	movl	%eax, -104(%rbp)
# t24 = b + TWO
	movl	-26(%rbp), %eax
	movl	TWO(%rip), %edx
	addl	%edx, %eax
	movl	%eax, -148(%rbp)
# t25 = a * t24
	movl	-22(%rbp), %eax
	imull	-148(%rbp), %eax
	movl	%eax, -152(%rbp)
# r = t25
	movl	-152(%rbp), %eax
	movl	%eax, -108(%rbp)
# t26 = a + TWO
	movl	-22(%rbp), %eax
	movl	TWO(%rip), %edx
	addl	%edx, %eax
	movl	%eax, -156(%rbp)
# t27 = t26 / b
	movl	-156(%rbp), %eax
	cltd
	idivl	-26(%rbp)
	movl	%eax, -160(%rbp)
# s = t27
	movl	-160(%rbp), %eax
	movl	%eax, -112(%rbp)
# t28 = a + TWO
	movl	-22(%rbp), %eax
	movl	TWO(%rip), %edx
	addl	%edx, %eax
	movl	%eax, -164(%rbp)
# t29 = t28 % b
	movl	-164(%rbp), %eax
	cltd
	idivl	-26(%rbp)
	movl	%edx, -168(%rbp)
# t = t29
	movl	-168(%rbp), %eax
	movl	%eax, -116(%rbp)
# t30 = 84
	movb	$56, -169(%rbp)
# param t30
# t31 = call printStr, 1
	movq	-169(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -173(%rbp)
	addq	$1, %rsp
# param p
# t32 = call printInt, 1
	movq	-100(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -177(%rbp)
	addq	$4, %rsp
# t33 = 92
	movb	$57, -178(%rbp)
# param t33
# t34 = call printStr, 1
	movq	-178(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -182(%rbp)
	addq	$1, %rsp
# t35 = 84
	movb	$56, -183(%rbp)
# param t35
# t36 = call printStr, 1
	movq	-183(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -187(%rbp)
	addq	$1, %rsp
# param q
# t37 = call printInt, 1
	movq	-104(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -191(%rbp)
	addq	$4, %rsp
# t38 = 92
	movb	$57, -192(%rbp)
# param t38
# t39 = call printStr, 1
	movq	-192(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -196(%rbp)
	addq	$1, %rsp
# t40 = 84
	movb	$56, -197(%rbp)
# param t40
# t41 = call printStr, 1
	movq	-197(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -201(%rbp)
	addq	$1, %rsp
# param r
# t42 = call printInt, 1
	movq	-108(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -205(%rbp)
	addq	$4, %rsp
# t43 = 92
	movb	$57, -206(%rbp)
# param t43
# t44 = call printStr, 1
	movq	-206(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -210(%rbp)
	addq	$1, %rsp
# t45 = 84
	movb	$56, -211(%rbp)
# param t45
# t46 = call printStr, 1
	movq	-211(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -215(%rbp)
	addq	$1, %rsp
# param s
# t47 = call printInt, 1
	movq	-112(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -219(%rbp)
	addq	$4, %rsp
# t48 = 92
	movb	$57, -220(%rbp)
# param t48
# t49 = call printStr, 1
	movq	-220(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -224(%rbp)
	addq	$1, %rsp
# t50 = 84
	movb	$56, -225(%rbp)
# param t50
# t51 = call printStr, 1
	movq	-225(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -229(%rbp)
	addq	$1, %rsp
# param t
# t52 = call printInt, 1
	movq	-116(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -233(%rbp)
	addq	$4, %rsp
# t53 = 92
	movb	$57, -234(%rbp)
# param t53
# t54 = call printStr, 1
	movq	-234(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -238(%rbp)
	addq	$1, %rsp
# t55 = p * q
	movl	-100(%rbp), %eax
	imull	-104(%rbp), %eax
	movl	%eax, -242(%rbp)
# t56 = q / p
	movl	-104(%rbp), %eax
	cltd
	idivl	-100(%rbp)
	movl	%eax, -246(%rbp)
# t57 = t55 + t56
	movl	-242(%rbp), %eax
	movl	-246(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -250(%rbp)
# u = t57
	movl	-250(%rbp), %eax
	movl	%eax, -120(%rbp)
# t58 = r * s
	movl	-108(%rbp), %eax
	imull	-112(%rbp), %eax
	movl	%eax, -254(%rbp)
# t59 = s / r
	movl	-112(%rbp), %eax
	cltd
	idivl	-108(%rbp)
	movl	%eax, -258(%rbp)
# t60 = t58 + t59
	movl	-254(%rbp), %eax
	movl	-258(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -262(%rbp)
# v = t60
	movl	-262(%rbp), %eax
	movl	%eax, -124(%rbp)
# t61 = 84
	movb	$56, -263(%rbp)
# param t61
# t62 = call printStr, 1
	movq	-263(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -267(%rbp)
	addq	$1, %rsp
# param u
# t63 = call printInt, 1
	movq	-120(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -271(%rbp)
	addq	$4, %rsp
# t64 = 92
	movb	$57, -272(%rbp)
# param t64
# t65 = call printStr, 1
	movq	-272(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -276(%rbp)
	addq	$1, %rsp
# t66 = 84
	movb	$56, -277(%rbp)
# param t66
# t67 = call printStr, 1
	movq	-277(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -281(%rbp)
	addq	$1, %rsp
# param v
# t68 = call printInt, 1
	movq	-124(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -285(%rbp)
	addq	$4, %rsp
# t69 = 92
	movb	$57, -286(%rbp)
# param t69
# t70 = call printStr, 1
	movq	-286(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -290(%rbp)
	addq	$1, %rsp
# param .LC0
# t71 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -298(%rbp)
	addq	$4, %rsp
# t72 = 0
	movl	$0, -302(%rbp)
# return t72
	movq	-302(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
