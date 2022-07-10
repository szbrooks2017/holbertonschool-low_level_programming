
#include "holberton.h"

/**
 * clear_bit - resets to o
 * @n: the number to reset
 * @index: index to change
 * Return: returns 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
