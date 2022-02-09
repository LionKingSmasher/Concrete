#include <fcntl.h>

int open(const char* path, int flags, int mode){
	struct syscall_reg_t reg = {
		.rdi = (u64)path,
		.rsi = (u64)flags,
		.rdx = (u64)mode,
	};

	concrete_syscall(0x02, &reg);
	return reg.rax;
}