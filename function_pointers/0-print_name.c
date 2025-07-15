#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to print
 * @f: Pointer to a function that takes a char * and returns void
 *
 * Description: If both the function pointer and name are not NULL,
 * this function calls the function pointed to by @f with @name as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
