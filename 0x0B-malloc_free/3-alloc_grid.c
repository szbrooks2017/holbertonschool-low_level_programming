#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2d array.
* @width: the width of the 2d array
* @height: the height of the 2d array
* Return: returns the new string
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int hi, wi, l, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (hi = 0; hi < height; hi++);
	{
		grid[hi] = malloc(sizeof(int) * width);

		if (grid[hi] == NULL)
		{
			for (wi = hi; wi >= 0; wi--)
			{
				free(grid[wi]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}
	return (grid);
}
