#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2D array of ints initialized to 0
* @width: number of columns
* @height: number of rows
*
* Return: pointer to the 2D array, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int a;

	int b;

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			int i;

			for (i = 0; i < a; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}

	return (grid);
}
