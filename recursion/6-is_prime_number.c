#include "main.h"

/**
* is_prime_number - Checks if an integer is a prime number
* @n: The number to check
*
* Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}

/**
* _is_prime_helper - Helper function to check primality recursively
* @n: The number to check
* @a: The current divisor to test
*
* Return: 1 if n is prime, 0 otherwise
*/
int _is_prime_helper(int n, int a)
{
	if (a * a > n)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, a + 1));
}
