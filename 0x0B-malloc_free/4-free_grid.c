#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2-dimensional array
 * @grid: 2-dimensional grid
 * @height: height dimension of the grid
 *
 * Description: Frees the memory allocated for the grid.
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
