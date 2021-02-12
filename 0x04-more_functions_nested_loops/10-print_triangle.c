#include "holberton.h"
/**
* print_traingle
* @size: is a size
* Return: void
*/

void print_triangle(int size)
{
int x;
int y;
int z;

if (size > 0)
	{
	for  (x = 0; x < size; x++)
	{
		for (y = 0; y < size - (x + 1); y++)
		{
		_putchar(' ');
		}
	for (z = 0; z < x + 1; z++)	
	{
_putchar('#');
}	
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
