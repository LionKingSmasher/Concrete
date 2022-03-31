#include <sys/types.h>

#ifndef __SYS_TIME_H__
#define __SYS_TIME_H__

typedef double clock_t;

struct timeval {
	time_t tv_sec;
	usecond_t tv_usec;
};

struct itimerval {
	struct timeval it_interval; // Timer interval
	struct timeval it_value;    // Current Value

};

struct timezone {
	int tz_minutewest;
	int tz_dsttime;
};

int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval *, struct timezone *);
int settimeofday(const struct timeval *, const struct timezone *);
#endif