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
	int a, i, sum = 0;

	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		arg = argv[a];
		i = 0;
		while (arg[i] != '\0')
		{
			if (arg[i] < '0' || arg[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
