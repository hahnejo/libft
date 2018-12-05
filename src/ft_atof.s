	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_ft_atof                ## -- Begin function ft_atof
	.p2align	4, 0x90
_ft_atof:                               ## @ft_atof
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	$0, -16(%rbp)
	movl	$1, -12(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -24(%rbp)
	movq	-8(%rbp), %rdi
	movl	-24(%rbp), %eax
	movl	%eax, %ecx
	addl	$1, %ecx
	movl	%ecx, -24(%rbp)
	movslq	%eax, %rdx
	movsbl	(%rdi,%rdx), %eax
	cmpl	$45, %eax
	jne	LBB0_2
## BB#1:
	movl	$-1, -12(%rbp)
LBB0_2:
	jmp	LBB0_3
LBB0_3:                                 ## =>This Inner Loop Header: Depth=1
	xorl	%eax, %eax
	movb	%al, %cl
	movq	-8(%rbp), %rdx
	movslq	-24(%rbp), %rsi
	movsbl	(%rdx,%rsi), %eax
	cmpl	$0, %eax
	movb	%cl, -25(%rbp)          ## 1-byte Spill
	je	LBB0_5
## BB#4:                                ##   in Loop: Header=BB0_3 Depth=1
	cmpl	$0, -16(%rbp)
	setne	%al
	movb	%al, -25(%rbp)          ## 1-byte Spill
LBB0_5:                                 ##   in Loop: Header=BB0_3 Depth=1
	movb	-25(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_6
	jmp	LBB0_9
LBB0_6:                                 ##   in Loop: Header=BB0_3 Depth=1
	movq	-8(%rbp), %rax
	movslq	-24(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$46, %edx
	jne	LBB0_8
## BB#7:                                ##   in Loop: Header=BB0_3 Depth=1
	movl	$1, -16(%rbp)
	jmp	LBB0_3
LBB0_8:                                 ##   in Loop: Header=BB0_3 Depth=1
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	jmp	LBB0_3
LBB0_9:
	movl	-20(%rbp), %eax
	imull	-12(%rbp), %eax
	cvtsi2sdl	%eax, %xmm0
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
