#ifndef __STDALIGN_H__
#define __STDALIGN_H__

#if __alignas_is_defined != 1
# define alignas _Alignas
# define __alignas_is_defined 1u
#endif

#if __alignof_is_defined != 1
# define alignof _Alignof
# define __alignof_is_defined 1u
#endif

#endif