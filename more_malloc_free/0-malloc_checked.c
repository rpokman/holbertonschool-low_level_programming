#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: size of memory to allocate
*
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
