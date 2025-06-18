#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * print_alphabet - print the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
