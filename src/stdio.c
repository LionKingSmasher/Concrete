#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <concrete/macro.h>

FILE __stdin = {
	.fd = 0,
};

FILE __stdout = {
	.fd = 1,
};

FILE __stderr = {
	.fd = 2,
};

FILE * stdin  = &__stdin;
FILE * stdout = &__stdout;
FILE * stderr = &__stderr;

static void clear_array(char* arr, int size){
	for(register int i = 0; i < size; i++)
		arr[i] = 0;
}

__always_inline static void format_check(const char* str, va_list arg, int* size) {
	int i = *size;
	char __a[21];
	clear_array(__a, 21);
	while(str[i] == '%'){
		switch(str[++i]){
		case 'd':
			{
				int __n = va_arg(arg, int);
				itoa(__n, __a);
				write(STDOUT, __a, strlen(__a));
				i++;
			}
			break;
		case 'c':
			{
				char __n = va_arg(arg, int);
				write(STDOUT, &__n, 1);
				i++;
			}
			break;
		case 's':
			{
				char* __s = va_arg(arg, char*);
				size_t len = strlen(__s);
				write(STDOUT, __s, len);
				i++;
			}
			break;
		case '%':
			{
				char a = '%';
				write(STDOUT, &a, 1);
				i++;
			}
			break;
		default:
			break;
		}
	}
	*size = i;
}

int printf(const char* fmt, ...){
	int i = 0, len = strlen(fmt);
	va_list arg;
	va_start(arg, fmt);

	for(;i < len; i++){
		format_check(fmt, arg, &i);
		write(STDOUT, &fmt[i], 1);
	}
	va_end(arg);
	return 0;
}

int sprintf(char* buffer, const char* format, ...){
	// TODO
	return 0;
}