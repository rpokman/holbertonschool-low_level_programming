#include <stdio.h>
#include "main.h"

/**
* main - Entry point of the program
* @argc: number of arguments passed to the program
* @argv: array of strings containing the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
