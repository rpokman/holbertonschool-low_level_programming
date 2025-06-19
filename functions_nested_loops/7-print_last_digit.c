#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: value of the last digit of number
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
	return (last_digit);
}
