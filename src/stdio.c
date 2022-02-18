#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

static void clear_array(char* arr, int size){
	for(register int i = 0; i < size; i++)
		arr[i] = 0;
}

int printf(const char* fmt, ...){
	int i = 0, len = strlen(fmt);
	char __a[21];
	clear_array(__a, 21);
	va_list arg;
	va_start(arg, fmt);

	for(;i < len; i++){
		if(fmt[i] == '%'){
			switch(fmt[++i]){
			case 'd':
				{
					int __n = va_arg(arg, int);
					itoa(__n, __a);
					write(STDOUT, __a, strlen(__a));
					i++;
				}
				break;
			default:
				break;
			}
		}
		write(STDOUT, &fmt[i], 1);
	}
	return 0;
}