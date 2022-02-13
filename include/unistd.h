#include <concrete/syscall.h>

#ifndef __UNISTD_H__
#define __UNISTD_H__
int close(int);

void _exit(int);
#define _exit exit

#endif