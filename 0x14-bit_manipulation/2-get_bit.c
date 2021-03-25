#include "holberton.h"

/**
* get_bit - gets the value of a bit at a given index
* @n: the number to find the index
* @index: the index to find
* Return: returns a 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if (n >> index & 1)
		return (1);
	else
		return (0);
}
