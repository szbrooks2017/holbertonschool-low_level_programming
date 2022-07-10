#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an arrays of char
 * @size: the size of an array
 * @c: the specific char to initialize the array with
 * Return: size == 0 or function fails - NULL
 * otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
