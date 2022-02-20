#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <concrete/macro.h>

char* itoa(int value, char* str){
	int i = 0, j;
	bool minus = (value < 0) ? true : false;

	if(minus){
		value = -value;
		i = 1;
		str[0] = '-';
	}

	do{
		for(j = i; j > 0; j--)
			str[j] = str[j-1];
		str[minus] = 0x30 + (value % 10);
		value/=10;
		i++;
	}while(value > 0);

	str[i] = '\0';
	return str;
}

// ====================== Memory Allocation ======================

HEAP_STATIC_FREE_AREA(init_free_area, 256);
struct heap_free_area *malloc_heap = &init_free_area.free_area;

static void* heap_alloc(struct heap_free_area ** heap, size_t *size){
	struct heap_free_area* area;
	void* mem = NULL;
	for(area = *heap; area; area = area->next){
		if(area->size >= *size){
			mem = HEAP_START_ADDRESS(area);
			break;
		}
	}
	return mem;
}

static void* heap_malloc(size_t size, struct heap_free_area** heap){
	void* mem;
	mem = heap_alloc(heap, &size);
	return mem;
}

void* malloc(size_t size){
	void* mem;
	mem = heap_malloc(size, &malloc_heap);
	return mem;
}

// ================================================================