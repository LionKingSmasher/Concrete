#include <stdio.h>

int printf(const char* fmt, ...){
	int i = 0, len = strlen(fmt);
	for(;i < len; i++)
		write(STDOUT, &fmt[i], 1);
	return 0;
}