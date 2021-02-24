#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints a chessboard
* @a: is an array
* @size: is the length of the diag
*/

void print_diagsums(int *a, int size)
{
	int x, i, d1, d2;

	d1 = 0;
	x = size + 1;
	for (i = 0; i < size; i++)
	{
		d1 += *(a + (x * i));
	}

	d2 = 0;
	x = size - 1;
	for (i = 1; i < size + 1; i++)
	{
		d2 += *(a + (x * i));
	}
printf("%d, %d\n", d1, d2);
}
