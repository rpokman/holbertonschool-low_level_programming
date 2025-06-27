#include "main.h"

/**
 * _strcmp - function
 *
 * @s1: hello
 *
 * @s2: world
 *
 * Return: de
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
	{

	}
	return (s1[a] - s2[a]);
}
