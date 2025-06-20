#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int heure, minute;
	for (heure = 0; heure < 24; heure ++)
	{
		for (minute = 0; minute < 60; minute ++)
		{
			_putchar('0' + heure / 10);
            		_putchar('0' + heure % 10);
            		_putchar(':');
            		_putchar('0' + minute / 10);
            		_putchar('0' + minute % 10);
            		_putchar('\n');
		}
	}
}
