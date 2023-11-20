	.file	"calc.c"
	.text
	.globl	add
	.type	add, @function
add:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	add, .-add
	.globl	sub
	.type	sub, @function
sub:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	sub, .-sub
	.globl	mul
	.type	mul, @function
mul:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	imull	-12(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	mul, .-mul
	.globl	divi
	.type	divi, @function
divi:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	divi, .-divi
	.section	.rodata
	.align 8
.LC0:
	.string	"1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVISION\nEnter choice:"
.LC1:
	.string	"%d"
.LC2:
	.string	"Enter a,b:"
.LC3:
	.string	"%d %d"
.LC4:
	.string	"Add:%d\n"
.LC5:
	.string	"Sub:%d\n"
.LC6:
	.string	"Enter a,b,c:"
.LC7:
	.string	"%d %d %d"
.LC8:
	.string	"Mul:%d\n"
.LC9:
	.string	"Div:%d\n"
.LC10:
	.string	"Invalid option"
	.text
	.globl	main
	.type	main, @function
main:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	add(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	sub(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	mul(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	divi(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	-68(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-68(%rbp), %eax
	cmpl	$2, %eax
	je	.L11
	cmpl	$2, %eax
	ja	.L12
	cmpl	$1, %eax
	je	.L13
	jmp	.L10
.L12:
	cmpl	$3, %eax
	je	.L14
	cmpl	$4, %eax
	je	.L15
	jmp	.L10
.L13:
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-60(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-48(%rbp), %rax
	movl	-60(%rbp), %ecx
	movl	-64(%rbp), %edx
	movl	%ecx, %esi
	movl	%edx, %edi
	call	*%rax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L11:
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-60(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-40(%rbp), %rax
	movl	-60(%rbp), %ecx
	movl	-64(%rbp), %edx
	movl	%ecx, %esi
	movl	%edx, %edi
	call	*%rax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L14:
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-56(%rbp), %rcx
	leaq	-60(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-32(%rbp), %rax
	movl	-56(%rbp), %edx
	movl	-60(%rbp), %esi
	movl	-64(%rbp), %ecx
	movl	%ecx, %edi
	call	*%rax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L15:
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-60(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-24(%rbp), %rax
	movl	-60(%rbp), %ecx
	movl	-64(%rbp), %edx
	movl	%ecx, %esi
	movl	%edx, %edi
	call	*%rax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L10:
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	movl	$0, %edi
	call	exit@PLT
.L16:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L18
	call	__stack_chk_fail@PLT
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
