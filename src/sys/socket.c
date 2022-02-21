#include <sys/socket.h>
#include <concrete/syscall.h>

int accept(int fd, struct sockaddr* sock_addr, socklen_t* len){
	return concrete_syscall(0x2B, fd, (u64)sock_addr, (u64)len);
}

int bind(int fd, const struct sockaddr* sock_addr, socklen_t len){
	return concrete_syscall(0x31, fd, (u64)sock_addr, len);
}

int connect(int fd, const struct sockaddr* user_addr, socklen_t len){
	return concrete_syscall(0x2A, fd, (u64)user_addr, len);
}

int getpeername(int fd, struct sockaddr* sock_addr, socklen_t* len){
	return concrete_syscall(0x170, fd, (u64)sock_addr, (u64)len);
}

int getsockname(int fd, struct sockaddr* sock_addr, socklen_t* len){
	return concrete_syscall(0x33, fd, (u64)sock_addr, (u64)len);
}

int listen(int fd, int back){
	return concrete_syscall(0x32, fd, back);
}

ssize_t recv(int fd, void* buf, size_t len, int flags){
	// TODO
	return 0;
}

ssize_t send(int fd, const void* msg, size_t len, int flags){
	// TODO
	return 0;
}

int socket(int family, int type, int protocol){
	return concrete_syscall(0x29, family, type, protocol);
}