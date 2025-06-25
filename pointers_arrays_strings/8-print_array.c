#include <stdio.h>
#include "main.h"

/**
 * print_array - function
 *
 *@a: string
 *
 *@n: n
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
