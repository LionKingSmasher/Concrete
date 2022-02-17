#include <stdio.h>
#include <time.h>

int main(int argc, char **argv){
	time_t t = time(NULL);
	printf("Test number: %d %d %d %d\n", t, 2, 0, -122358);
	return 0;
}