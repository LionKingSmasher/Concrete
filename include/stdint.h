#ifndef __STDINT_H__
#define __STDINT_H__

typedef char               int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;

typedef char               int_fast8_t;
typedef short              int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;

typedef char               int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;

typedef int64_t            intmax_t;
typedef int                intptr_t;

typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

typedef unsigned char      uint_fast8_t;
typedef unsigned short     uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

typedef uint64_t           uintmax_t;
typedef unsigned int       uintptr_t;

#endif