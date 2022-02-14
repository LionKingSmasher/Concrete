#ifndef __SYS_TIME_H__
#define __SYS_TIME_H__
typedef long time_t;
typedef long usecond_t;

struct timeval {
	time_t tv_sec;
	usecond_t tv_usec;
};

struct timezone {
	int tz_minutewest;
	int tz_dsttime;
};

int gettimeofday(struct timeval *, struct timezone *);
int settimeofday(const struct timeval *, const struct timezone *);
#endif