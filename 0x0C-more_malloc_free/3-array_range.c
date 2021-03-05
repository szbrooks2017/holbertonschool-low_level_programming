#include <stdlib.h>
#include "holberton.h"

/**
* array_range - creates an array
* @min: the first value of the array
* @max: the last value of the array
* Return: if min > max or fail then nul
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);

	array = (int *)malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
