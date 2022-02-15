	.global _start
	.globl _exit
	.text
	.type _start, @function
	.type __Concrete_main, @function
	.type main, @function

_start:
	xorl %ebp, %ebp

	// movq $main, %rdi
	lea main(%rip), %rdi
	popq %rsi
	movq %rsp, %rdx
	call __Concrete_main

	// // argc
	// popq %rdi
	// // argv
	// movq %rsp, %rsi
	// call main

	mov %rax, %rdi
	call _exit

	// mov %rax, %rdi
	// mov 0x3C, %rax
	// syscall
	
	.size _start, . - _start
