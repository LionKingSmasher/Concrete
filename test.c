#include <unistd.h>

int main(int argc, char **argv){
	while(1){
		// _exit(1);
		concrete_syscall(0x3C, 0, 1, 2, 3, 4, 5);
	}
	return 0;
}