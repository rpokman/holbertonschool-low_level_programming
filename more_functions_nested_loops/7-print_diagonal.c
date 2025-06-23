#include "main.h"

/**
 * print_diagonal - print in diag
 *
 * @n: n is smthg
 *
 */
void print_diagonal(int n)
{
	int diago;
	int a;

		if (n > 0)
		{
			for (diago = 0; diago < n ; diago++)
			{
				for (a = 0; a < diago; a++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	else
		_putchar('\n');
}
