#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated string
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c, d;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s[c] = s1[c];

	for (d = 0; d < b; d++)
		s[c + d] = s2[c];

	s[c + d] = '\0';

	return (s);
}
