#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @start: the start of the array
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, int start, int size)
{
	int i = start;

	if (start <= size)
	{
		printf("Searching in array: ");
		while (i <= size)
		{
			printf("%d", array[i]);
			if (i < size)
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
	}
}

/**
 * binary_search - searches for a value with binary search
 * @array: a pointer to the first element of the array
 * @size: number of elements
 * @value: is the value of to be search
 * Return: returns the index position of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int mid = 0;

	if (array != NULL && size != '\0' && value != '\0')
	{
		print_array(array, low, high);

		while (low <= high)
		{
			mid = (low + high) / 2;

			if (array[mid] == value)
			{
				return (mid);
			}
			else if (array[mid] > value)
			{
				high = mid - 1;
				print_array(array, low, high);
			}
			else
			{
				low = mid + 1;
				print_array(array, low, high);
			}
		}
	}
	return (-1);
}