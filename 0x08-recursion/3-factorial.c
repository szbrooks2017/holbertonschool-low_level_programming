#include "holberton.h"

/**
 * factorial - factors ints
 * @n: is a number
 * Return: returns nothing
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
