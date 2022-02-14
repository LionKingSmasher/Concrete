#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
	char* string = "Hello, world!\n";
	int len = strlen(string);
	while(1){
		write(1, string, len);
		exit(1);
		// concrete_syscall(0x3C, 0, 1, 2, 3, 4, 5);
	}
	return 0;
}