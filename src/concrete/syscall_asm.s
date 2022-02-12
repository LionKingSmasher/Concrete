	.global mov_ax
	.global system_call

	.text

mov_ax:
	mov %rdi, %rax
	ret

system_call:
	// System call number
	mov %rdi, %rax 
	
	mov %rsi, %rbx
	
	mov   (%rbx), %rdi
	mov  8(%rbx), %rsi
	mov 16(%rbx), %rdx
	mov 24(%rbx), %rcx
	mov 28(%rbx), %r8d
	mov 32(%rbx), %r9d

	syscall
	ret
