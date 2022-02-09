#include <unistd.h>

int close(int fd){
	struct syscall_reg_t reg = {
		.rdi = fd,
	};
	concrete_syscall(0x03, &reg);
	return reg.rax;
}

void _exit(int err_code){
	struct syscall_reg_t reg = {
		.rdi = err_code,
	};
	concrete_syscall(0x3C, &reg);
}