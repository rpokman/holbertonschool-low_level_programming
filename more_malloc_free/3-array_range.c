#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to the array, or NULL on error
 */
int *array_range(int min, int max)
{
	int *c;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	c = malloc(sizeof(int) * b);
	if (c == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		c[a] = min + a;

	return (c);
}
