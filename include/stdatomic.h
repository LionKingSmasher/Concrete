#include <concrete/macro.h>

#ifndef __STDATOMIC_H__
#define __STDATOMIC_H__

#define ATOMIC_FLAG_INIT {0}

typedef atomic_bool   _Atomic _Bool;
typedef atomic_char   _Atomic char;
typedef atomic_schar  _Atomic signed char;
typedef atomic_uchar  _Atomic unsigned char;
typedef atomic_short  _Atomic short;
typedef atomic_ushort _Atomic unsigned short;
typedef atomic_int    _Atomic int;
typedef atomic_uint   _Atomic unsigned int;
typedef atomic_long   _Atomic long;
typedef atomic_ulong  _Atomic unsigned long;
typedef atomic_llong  _Atomic long long;
typedef atomic_ullong _Atomic unsigned long long;

typedef enum {
#if __GNUC__  // For GCC
	memory_order_relaxed = __ATOMIC_RELAXED,
	memory_order_consume = __ATOMIC_CONSUME,
	memory_order_acquire = __ATOMIC_ACQUIRE,
	memory_order_release = __ATOMIC_RELEASE,
	memory_order_acq_rel = __ATOMIC_ACQ_REL,
	memory_order_seq_cst = __ATOMIC_SEQ_CST, 
#else         // Other Compiler
	/* TODO */
#endif
} memory_order;

typedef struct _Atomic {
	_Bool flag;
} atomic_flag;

always_inline void atomic_flag_clear(volatile atomic* obj){
	obj->flag = 0;
}

#endif