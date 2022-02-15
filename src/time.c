#include <time.h>
#include <concrete/macro.h>

time_t time(time_t* timer){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	if(unlikely(timer))
		*timer = tv.tv_sec;
	return tv.tv_sec;
}