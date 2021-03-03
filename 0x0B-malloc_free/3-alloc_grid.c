#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2d array.
* @width: the width of the 2d array
* @height: the height of the 2d array
* Return: returns the new string
*/

int **alloc_grid(int width, int height)
{
	int grid;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++);
	{
		grid[hi] = malloc(sizeof(int) * width);

		if (grid[hi] == NULL)
		{
			for (; hi <= 0; hi--)
				free(grid[hi]);
		free(grid);
		return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		gridd[hi][wi] = 0;
	}
	return (grid);
}
