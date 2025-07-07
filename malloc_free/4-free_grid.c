#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: The address of the 2D grid
 * @height: Height (number of rows) of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
