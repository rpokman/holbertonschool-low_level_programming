#include "main.h"

/**
 * string_toupper - function
 *
 * @str: str
 *
 * Return: return str
 */
char *string_toupper(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str);
}
