#include "holberton.h"
int _sqrt(int x, int y);
/**
 * _sqrt - is the square root
 * @y: is the root
 * @x: is the base number
 * Return: returns the square root
 */

int _sqrt(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
		return (-1);

	if (sqrt == x)
		return (y);

	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - finds the square root
 * @n: is an int
 * Return: is void
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
