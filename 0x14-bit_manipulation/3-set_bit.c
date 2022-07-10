#include "holberton.h"
/**
 * set_bit - sets teh bit
 * @n: is th thing
 * @index: is the
 * Return: returns a thing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
