#include <unistd.h>

int close(int fd){
	return concrete_syscall(0x03, fd);
}

void _exit(int err_code){
	concrete_syscall(0x3C, err_code);
}