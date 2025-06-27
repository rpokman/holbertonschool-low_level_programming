#include "main.h"

/**
 * reverse_array - function
 *
 * @n: n
 *
 * @a: a
 *
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int r = 0;
	int p = n - 1;

	for (r = 0; r < p; r++)
	{
		int o = a[r];

		a[r] = a[p];
		a[p] = o;
		p--;
	}
}
