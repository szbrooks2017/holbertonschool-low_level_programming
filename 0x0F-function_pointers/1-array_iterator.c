#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: the array
* @size: the size of array
* @action: a pointer to the function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int index = 0;

	if (action != NULL && array != NULL)
	{
		for (; index < size; index++)
			action(array[index]);
	}
}
