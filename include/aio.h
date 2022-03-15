#include <time.h>
#include <signal.h>
#include <sys/types.h>

#ifndef __AIO_H__
#define __AIO_H__

struct aiocb {
	int             aio_fildes;     // file descriptor
	off_t           aio_offset;     // file offset
	volatile void*  aio_buf;        // Location of buffer
	size_t          aio_nbytes;     // Length of transfer
	int             aio_reqprio;    // Request priority offset
	struct sigevent aio_sigevent;   // Signal number and value
	int             aio_lio_opcode; // Operation to be performed
};

#endif