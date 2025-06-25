#include "main.h"

/**
 * puts2 - function
 *
 *@str: string
 */
void puts2(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
