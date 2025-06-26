#include "main.h"

/**
 * _atoi - function
 *
 *@s: string
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int a = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			sign *= -1;
		else if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 - (s[a] - '0');
			started = 1;
		}
		else if (started)
			break;

	}
	return (sign == 1 ? -result : result);
}
