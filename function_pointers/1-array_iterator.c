#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Executes a function
* @array: The array to iterate over
* @size: The size of the array
* @action: A pointer to the function to be used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t a;

		if (array == NULL || action == NULL)
		return;

		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
}
