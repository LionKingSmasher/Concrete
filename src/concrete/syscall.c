#include <concrete/syscall.h>
#include <stdarg.h>

u64 concrete_syscall(u16 syscall_num, ...){
	u32 i = 0;
	u64 reg[6];
	va_list reg_list;
	va_start(reg_list, syscall_num);

	for(; i < 6; i++)
		reg[i] = va_arg(reg_list, u64);

	va_end(reg_list);

	// asm volatile("mov %0, %%ax"  : : "r"(syscall_num));
	// asm volatile("mov %0, %%rdi" : : "r"(rdi));
	// asm volatile("mov %0, %%rsi" : : "r"(reg[1]));
	// asm volatile("mov %0, %%rdx" : : "r"(reg[2]));
	// asm volatile("mov %0, %%rcx" : : "r"(reg[3]));
	// asm volatile("mov %0, %%r8"  : : "r"(reg[4]));
	// asm volatile("mov %0, %%r9"  : : "r"(reg[5]));
	// asm volatile("syscall");
	// asm volatile("mov %%rax, %0" : "=r"(ret_val));

	return system_call(syscall_num, reg);
}