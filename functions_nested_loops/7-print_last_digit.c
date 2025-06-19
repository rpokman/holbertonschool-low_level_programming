#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

		if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + '0');
	}
		else
		{
			_putchar(last_digit + '0');
		}
	return(last_digit);
}
