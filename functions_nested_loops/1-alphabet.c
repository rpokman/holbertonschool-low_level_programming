#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_print_alphabet();
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
	return (0);
}
