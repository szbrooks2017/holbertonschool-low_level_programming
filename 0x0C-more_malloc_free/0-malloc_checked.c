#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory with malloc
 * @b: is an unsigned int
 * Return: returns a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
