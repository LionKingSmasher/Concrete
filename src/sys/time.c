#include <sys/time.h>
#include <concrete/syscall.h>
#include <concrete/macro.h>

__always_inline int gettimeofday(struct timeval *tv, struct timezone *tz){
	return concrete_syscall(0x60, tv, tz);
}

__always_inline int settimeofday(const struct timeval *tv, const struct timezone *tz){
	return concrete_syscall(0xA4, tv, tz);
}