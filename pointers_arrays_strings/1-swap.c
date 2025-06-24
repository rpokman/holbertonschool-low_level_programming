#include "main.h"

/**
 * swap_int - function
 *
 * @a: first value to change
 * @b: second value to change
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
