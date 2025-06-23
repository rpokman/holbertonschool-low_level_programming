#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{

		if (number == '2' || number == '4')
		{
			number++;
			continue;
		}

		_putchar(number);
		number++;
	}

	_putchar('\n');
}
