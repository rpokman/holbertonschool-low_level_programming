#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The string to scan
* @accept: The characters allowed in the prefix
*
* Return: The number of bytes in the initial segment of s
* that consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
				break;
			}
		}

		if (c == 0)
			return (a);
	}

	return (a);
}
