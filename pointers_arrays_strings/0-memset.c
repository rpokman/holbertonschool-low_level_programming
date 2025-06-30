#include "main.h"

/**
 *_memset - function
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a = 0;

    for (a = 0; a < n; a++)
    {
        s[a] = b;
    }
    return (s);
}