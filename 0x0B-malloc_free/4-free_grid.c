#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees two dimension array
 * @grid: the 2D grid
 * @height: the height of the grid
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
