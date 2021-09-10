#include "search_algos.h"

/**
 * linear_search - searches though an array for a value
 * @array: is pointer to the first element in the array
 * @size: is the number of elements of the array
 * @value: is the value to be searched for
 * Return: returns an int index wehre value is located at
 */

int linear_search(int *array, size_t size, int value)
{
    /* loop through array */
    size_t index;

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			return index;
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
    }
	return -1;
    /* if match then print */
}