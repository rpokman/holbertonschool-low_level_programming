#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of located substring,
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    unsigned a, b;
    for (a = 0; haystack[a] != '\0'; a++)
    {
        for (b = 0; needle[b] != '\0'; b++)
        {
            if (haystack[a + b] != needle[b])
            break;
        }
        if (needle[b] == '\0')
            return (&haystack[a]);
    }
    return (NULL);
}