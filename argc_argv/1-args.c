#include <stdio.h>
#include "main.h"

/**
* main - Entry point of the program
* @argc: number of arguments passed to the program (unused)
* @argv: array of strings containing the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
    (void)argv;
    printf ("%d\n", argc -1);
    return (0);
}