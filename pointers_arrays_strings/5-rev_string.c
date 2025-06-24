#include "main.h"

/**
 * rev_string - function
 *
 *@s: string
 */
void rev_string(char *s)
{
	int temp;
	int a = 0;
	int start, end;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	start = 0;
	end = a - 1;

	for (start = 0, end = a - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
