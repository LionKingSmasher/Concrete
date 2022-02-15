#ifndef __CONCRETE_MACRO_H__
#define __CONCRETE_MACRO_H__

#define always_inline __attribute__((always_inline)) inline
#define noreturn      __attribute__((noreturn))

#define likely(X)     __builtin_expect(!!(X), 1)
#define unlikely(X)   __builtin_expect(!!(X), 0)

#endif