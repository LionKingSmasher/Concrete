#include <sys/time.h>
#include <concrete/syscall.h>

int gettimeofday(struct timeval *tv, struct timezone *tz){
	return concrete_syscall(0x60, tv, tz);
}

int settimeofday(const struct timeval *tv, const struct timezone *tz){
	return concrete_syscall(0xA4, tv, tz);
}