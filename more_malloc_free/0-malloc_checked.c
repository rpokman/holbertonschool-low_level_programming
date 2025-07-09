#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - Allocates memory with malloc
* @b: Size of memory to allocate
*
* Return: Pointer to allocated memory, or terminates
* with status 98 on failure.
*/
void *malloc_checked(unsigned int b)
{

	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
