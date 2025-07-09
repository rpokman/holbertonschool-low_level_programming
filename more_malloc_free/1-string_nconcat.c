#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, taking at most n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to take from s2
 *
 * Return: Pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0, b = 0, c, d;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	if (n > (unsigned int)b)
		n = b;

	s = malloc(sizeof(char) * (a + n + 1));
	if (s == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s[c] = s1[c];

	for (d = 0; d < (int)n && s2[d] != '\0'; d++)
		s[c + d] = s2[d];

	s[c + d] = '\0';

	return (s);
}
