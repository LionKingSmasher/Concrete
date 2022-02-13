	.global _start
	.globl _exit
	.text
	.type _start, @function

_start:
	xorl %ebp, %ebp

	// argc
	popq %rdi
	// argv
	movq %rsp, %rsi
	call main

	mov %rax, %rdi
	mov 0x3C, %rax
	syscall
	
	.size _start, . - _start
