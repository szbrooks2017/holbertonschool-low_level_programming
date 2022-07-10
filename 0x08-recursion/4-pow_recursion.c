#include "holberton.h"

/**
 * _pow_recursion - calculates power
 * @x: is the base number
 * @y: is the power number
 * Return: returns positvie and negative ints
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
