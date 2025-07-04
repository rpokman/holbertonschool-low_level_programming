#include "main.h"

/**
* _memset - Fills the first n bytes of the memory area pointed to by s
*           with the constant byte b.
* @s: Pointer to the memory area to fill.
* @b: The constant byte to fill the memory with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int a;

		for (a = 0; a < n; a++)
		{
			s[a] = b;
		}
		return (s);
}
