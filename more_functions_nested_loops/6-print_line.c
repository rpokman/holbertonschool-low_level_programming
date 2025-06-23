#include "main.h"

/**
 * print_line - print a line
 *
 * @n: n is the n idk
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
			_putchar('\n');
}
