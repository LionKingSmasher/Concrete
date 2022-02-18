#include <stddef.h>

#ifndef __STDLIB_H__
#define __STDLIB_H__

struct heap_free_area{
	size_t size;
	struct heap_free_area *next, *prev;
};

#define HEAP_GRANULARITY_TYPE double __attribute__((aligned(sizeof(size_t))));
#define HEAP_GRANULARITY      (__alignof__(HEAP_GRANULARITY_TYPE))
// HEAP_GRANULARITY 배수 공식
#define ADJUST_HEAP_SIZE(X)   ((X + HEAP_GRANULARITY - 1) & ~(HEAP_GRANULARITY - 1))

#define HEAP_STATIC_FREE_AREA(name, size)                                  \
	static struct {                                                        \
		HEAP_GRANULARITY_TYPE aligned_space; /* aligned space */           \
		char space[ADJUST_HEAP_SIZE(size) -  /*   Heap space  */           \
					sizeof(struct heap_free_area) -                        \
					HEAP_GRANULARITY];                                     \
		struct heap_free_area free_area;     /*   Free Area   */           \
	} name = {(HEAP_GRANULARITY_TYPE)0, "", {ADJUST_HEAP_SIZE(size), 0, 0}}


char* itoa(int, char*);

void* malloc(size_t);

#endif