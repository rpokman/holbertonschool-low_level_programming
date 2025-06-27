#include "main.h"

/**
 * _strncpy - function
 *
 * @dest: a
 *
 * @src: b
 *
 * @n: n
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];

	}
	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
