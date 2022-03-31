#include <unistd.h>
#include <concrete/syscall.h>
#include <concrete/macro.h>

__always_inline ssize_t write(int fd, const char* str, size_t count) {
	return concrete_syscall(0x01, fd, (u64)str, count);
}

__always_inline ssize_t read(int fd, char* buf, size_t count){
	return concrete_syscall(0x00, fd, (u64)buf, count);
}

__always_inline int close(int fd){
	return concrete_syscall(0x03, fd);
}

__always_inline void _exit(int err_code){
	concrete_syscall(0x3C, err_code);
}