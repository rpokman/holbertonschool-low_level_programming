#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursively checks for the square root of n
 * @n: The number to find the square root of
 * @a: The current guess (starting from 0)
 *
 * Return: The square root of n, or -1 if none exists
 */
int _sqrt_helper(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (_sqrt_helper(n, a + 1));
}
