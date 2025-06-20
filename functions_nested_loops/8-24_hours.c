#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 */
void jack_bauer(void)

{

	int heure, minute;

	for (heure = 0; heure < 24; heure++)
	{

		for (minute = 0; minute < 60; minute++)
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
