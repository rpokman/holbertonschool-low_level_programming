#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("The last digit of %d is %d and not 0\n", n);
	}
	return (0);
}
