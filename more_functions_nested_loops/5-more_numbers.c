#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int line = 0;
	int number;

	while (line < 10)
	{
		number = 0;

		while (number <= 14)
		{

			if (number >= 10)
			_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			number++;
		}
	_putchar('\n');
	line++;
	}
}
