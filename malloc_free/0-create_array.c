#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be created
 * @c: The character to initialize each element of the array with
 *
 * Return: A pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}

	return (array);
}
