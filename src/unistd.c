#include <unistd.h>
#include <concrete/macro.h>

always_inline ssize_t write(int fd, const char* str, size_t count) {
	return concrete_syscall(0x01, fd, (u64)str, count);
}

always_inline int close(int fd){
	return concrete_syscall(0x03, fd);
}

always_inline void _exit(int err_code){
	concrete_syscall(0x3C, err_code);
}