#include <stdio.h>

/**
* first - Function executed before main
*
* This function uses the constructor attribute to run
* automatically before the main function starts.
*/
void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
