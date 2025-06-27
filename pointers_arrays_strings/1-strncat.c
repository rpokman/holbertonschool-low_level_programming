#include "main.h"

/**
 * _strncat - function
 *
 * @dest: hello
 *
 * @src: world
 *
 * @n: n
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
