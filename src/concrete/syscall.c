#include <concrete/syscall.h>

void concrete_syscall(u16 syscall_num, struct syscall_reg_t* reg){
	asm volatile (
		"movq %1, %%rax \n\t" // System call number
		"movq %2, %%rdi \n\t" // First  argument
		"movq %3, %%rsi \n\t" // Second argument
		"movq %4, %%rdx \n\t" // Third  argument
		"movq %5, %%rcx \n\t" // Fourth argument
		"movq %6, %%r8  \n\t" // Fifth  argument
		"movq %7, %%r9  \n\t" // Sixth  argument
		"syscall \n\t"       // System call
		"movl %%eax, %0 \n\t" // return value
		: "=r" (reg->rax)
		: "m" (syscall_num), "m" (reg->rdi), "m" (reg->rsi), "m" (reg->rdx), "m" (reg->rcx), "m" (reg->r8), "m" (reg->r9)
	);
}