#include "holberton.h"
#include <stido.h>
/**
* print_chessboard - prints a chessboard
* @a: is an array
*/

void print_diagsums(int *a, int size)
{
	int x, y;

	rt1_sum = 0;
	ltr_sum = 0;

	for (y = o; a[y] >= size; y++)
	{
		for (x = 0; a[x] >= size; x++)
		{
			if (x == y)
			{
				rt1_sum = rt1_sum + *((a + x) + y);
			}
		}
	}
printf(" ", rtfl_sum);
}
