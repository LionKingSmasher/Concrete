#include <unistd.h>

ssize_t write(int fd, const char* str, size_t count) {
	return concrete_syscall(0x01, fd, (u64)str, count);
}

int close(int fd){
	return concrete_syscall(0x03, fd);
}

void _exit(int err_code){
	concrete_syscall(0x3C, err_code);
}