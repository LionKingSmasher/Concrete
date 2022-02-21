#include <concrete/syscall.h>
#include <concrete/macro.h>

#ifndef __FCNTL_H__
#define __FCNTL_H__

#define O_RDONLY   0x0
#define O_WRONLY   0x1
#define O_RDWR     0x2
#define O_ACCMODE  0x3
#define O_NONBLOCK 0x4
#define O_APPEND   0x8
#define O_CREAT    0x200
#define O_TRUNC    0x400
#define O_EXCL     0x800

extern int open(const char*, int, int);

#endif