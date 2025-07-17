#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of arguments passed.
 *
 * Return: The sum of the arguments, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
