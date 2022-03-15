#include <stddef.h>
#include <stdint.h>
#include <sys/time.h>

#ifndef __TIME_H__
#define __TIME_H__

struct tm {
	short tm_sec;   // second
	short tm_min;   // minute
	short tm_hour;  // hour
	short tm_mday;  // day
	short tm_mon;   // month
	short tm_year;  // year
	short tm_wday;  // days since sunday
	short tm_yday;  // days since January 1
	short tm_isdst; // Daylight Saving Time flag
};

struct timespec {
	time_t tv_sec;
	long   tv_nsec;
};

time_t time(time_t*);
#endif