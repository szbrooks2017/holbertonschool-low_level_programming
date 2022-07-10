#include "holberton.h"

/**
 * binary_to_uint - converts to b
 * @b: pointer to string
 * Return: converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	if (b == NULL)
		return (0);

	for (x = 0; *b; b++)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			break;
	}
	return (x);
}
