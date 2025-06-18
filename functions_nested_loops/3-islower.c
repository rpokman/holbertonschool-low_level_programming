#include "main.h"

/**
 * main - Entry point
 *
 * _islower - checks for lowercase character
 *
 * @c - the char to check
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
