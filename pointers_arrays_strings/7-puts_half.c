#include "main.h"

/**
 * puts_half - function
 *
 *@str: string
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{

	}

	if (a % 2 == 0)
		b = a / 2;
	else
		b = (a + 1) / 2;

	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
