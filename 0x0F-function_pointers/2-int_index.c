#include "function_pointers.h"

/**
* int_index - searches for an integer in an array of ints
* @array: the array of integers
* @size: the size of the array
* @cmp: a pointer to the functions to be used to compare values
* Return: if cmp returns no matches return -1
*	the first element oof the index is returned
*	 if cmp does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
