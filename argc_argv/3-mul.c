#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: number of arguments passed to the program
* @argv: array of strings containing the arguments
*
* Return: Always 0 (Success), or 1 if incorrect arguments
*/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
