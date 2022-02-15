#include <concrete/macro.h>

int __Concrete_main(
					int (*main)(int, char**), // main function 
					int argc,                 // arguments count
					char** argv)              // arguments values
{
	return main(argc, argv);
}