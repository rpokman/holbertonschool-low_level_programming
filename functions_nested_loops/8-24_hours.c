#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int heure, minute;
	for (heure = 0; heure > 24; heure ++)
	{
		for (minute = 0; minute > 60; minute ++)
		{
			printf("%02d:%02d0\n", heure, minute);
		}
	}
}
