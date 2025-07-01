#include "main.h"

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
* @dest: Pointer to the destination memory area.
* @src: Pointer to the source memory area.
* @n: Number of bytes to copy.
*
* Return: A pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
