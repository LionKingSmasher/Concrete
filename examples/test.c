#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
	time_t t = time(NULL);
	printf("Test number: %d%%%c%s", 1, 'c', "Fal");
	return 0;
}