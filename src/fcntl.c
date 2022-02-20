#include <fcntl.h>

__always_inline int open(const char* path, int flags, int mode){
	return concrete_syscall(0x02, (u64)path, flags, mode);
}