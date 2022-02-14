#include <time.h>

time_t time(time_t* timer){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	if(timer)
		*timer = tv.tv_sec;
	return tv.tv_sec;
}