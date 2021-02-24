#include "holberton.h"
#include <stdio.h>
/**
* print_chessboard - prints a chessboard
* @a: is an array
*/

void print_diagsums(int *a, int size)
{
	int y, rt1_sum = 0, lt1_sum = 0;

	for (y = 0; y < size; y++)
	{
		rt1_sum += a[(size + 1) * y];
		lt1_sum += a[(size - 1) * (y + 1)];
		}
printf("%d, %d\n", rt1_sum, lt1_sum);
}

