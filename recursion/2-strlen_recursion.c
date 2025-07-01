#include "main.h"

/**
* _strlen_recursion - Returns the length of a string recursively
* @s: Pointer to the string
* Return: The length of the string (as an int)
*/
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
