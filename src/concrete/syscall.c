#include <concrete/syscall.h>

void concrete_syscall(u16 syscall_num, struct syscall_reg_t* reg){
	__asm__ volatile (
		"mov %1, %%rax \n\t" // System call number
		"mov %2, %%rdi \n\t" // First argument
		"mov %3, %%rsi \n\t" // Second argument
		"mov %4, %%rdx \n\t" // Third argument
		"mov %5, %%rcx \n\t" // Fourth argument
		"mov %6, %%r8  \n\t" // Fifth argument
		"mov %7, %%r9  \n\t" // Sixth argument
		"syscall \n\t"       // System call
		"mov %%rax, %0 \n\t" // return value
		: "=r" (reg->rax), "=r" (syscall_num)
		: "r" (reg->rdi), "r" (reg->rsi), "r" (reg->rdx), "r" (reg->rcx), "r" (reg->r8), "r" (reg->r9)
	);
}