#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

void test_function(char a, ...){
	va_list arg;
	va_start(arg, a);
	char __v = (char)va_arg(arg, int);
	printf("Test: %c %c\n", a, __v);
	va_end(arg);
}

int main(int argc, char **argv){
	time_t t = time(NULL);
	printf("Test number: %d%%%c%s\n", 1, 'd', argv[1]);
	test_function('a', 'b');
	return 0;
}