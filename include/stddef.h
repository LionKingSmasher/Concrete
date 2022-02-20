#include <concrete/macro.h>

#ifndef __STDDEF_H__
#define __STDDEF_H__

#define NULL ((void*)0)

typedef unsigned int size_t;
typedef int          ssize_t;

// Because bit width of ptrdiff_t is not less than 17
typedef unsigned int ptrdiff_t; 

// This struct alignment is maybe 16
typedef struct {
	long long __aligned(__alignof__(long long)) max_align_ll_1;
	long long __aligned(__alignof__(long long)) max_align_ll_2;
} max_align_t;

#define offsetof __builtin_offsetof

#endif