#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid
 * @grid: is the grid to be freed
 * @height: height of the grid
 * Return: returns the gridd
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
