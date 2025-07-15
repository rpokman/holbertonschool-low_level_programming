#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Returns index of first match in array using cmp
 * @array: Array to search
 * @size: Number of elements
 * @cmp: Function to compare values
 *
 * Return: Index of match, or -1 if none or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
