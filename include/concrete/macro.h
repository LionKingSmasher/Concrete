#ifndef __CONCRETE_MACRO_H__
#define __CONCRETE_MACRO_H__

#define __always_inline __attribute__((always_inline)) inline
#define __noreturn      __attribute__((noreturn))
#define __aligned(X)    __attribute__((aligned(X)))

#define likely(X)     __builtin_expect(!!(X), 1)
#define unlikely(X)   __builtin_expect(!!(X), 0)

#endif