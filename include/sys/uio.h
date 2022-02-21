#include <sys/types.h>

#ifndef __SYS_UIO_H__
#define __SYS_UIO_H__

struct iovec {
	void   *iov_base; // Base Address of a memory region for input/output.
	size_t iov_len;   // size of the memory pointed to by iov_base;
};

#endif