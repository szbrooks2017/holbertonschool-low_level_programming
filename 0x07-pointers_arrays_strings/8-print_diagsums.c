#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints a chessboard
 * @a: is an array
 * @size: is the length of the diag
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int d1;
	int d2;

	for (i = 0, d1 = 0; i < (size * size); i += (size + 1))
	{
		d1 += a[i];
	}
	for (j = 0, d2 = 0; j < (size * size) - size + 1; j += (size - 1))

	{
		d2 += a[j];
	}

	printf("%d, %d\n", d1, d2);
}
