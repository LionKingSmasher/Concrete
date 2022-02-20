#ifndef __STDBOOL_H__
#define __STDBOOL_H__

#if __bool_true_false_are_defined != 1
  typedef _Bool bool;
# define true  1u
# define false 0u
# define __bool_true_false_are_defined 1u
#endif

#endif