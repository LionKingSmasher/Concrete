#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <concrete/syscall.h>

#ifndef __STDIO_H__
#define __STDIO_H__

typedef struct {
	int fd;
	// TODO
}FILE;

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

int printf(const char*, ...);
int sprintf(char* buffer, const char* format, ...);
#endif