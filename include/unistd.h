#include <concrete/syscall.h>
#include <concrete/types.h>

#ifndef __UNISTD_H__
#define __UNISTD_H__

#define STDIN  0
#define STDOUT 1
#define STDERR 2

extern ssize_t write(int, const char*, size_t);
extern int close(int);
extern void _exit(int);
#define exit _exit

#endif