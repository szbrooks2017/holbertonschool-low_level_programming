#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2d array.
* @width: the width of the 2d array
* @height: the height of the 2d array
* Return: returns the new string
*/

int **alloc_grid(int width, int height)
{
	int hi = 0, wi = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)

		return (NULL);

	while (hi < height)
	{
		grid[hi] = malloc(sizeof(int) * width);

		if (grid[hi] == NULL)
		{
			while (hi >= 0)
			{
				hi--;
				free(grid[hi]);
			}
			free(grid);
			return (NULL);
		}
		hi++;
	}

	for (hi = 0; hi < height; hi++)

		for (wi = 0; wi < width; wi++)
			grid[hi][wi] = 0;

	return (grid);
}
