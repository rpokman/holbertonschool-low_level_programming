#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Allocates memory for a duplicate of str. Returns a pointer to the new
 * string, or NULL if allocation fails or str is NULL.
 * Return: A pointer
 */
char *_strdup(char *str)
{
	int a = 0;

	int b = 0;

char *c;

	if (str == NULL)
	{
	return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	c = malloc(a + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		c[b] = str[b];
	}
	c[a] = '\0';
return (c);
}
