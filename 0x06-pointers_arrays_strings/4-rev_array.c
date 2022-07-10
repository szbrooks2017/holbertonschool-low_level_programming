#include "holberton.h"
/**
 * reverse_array - reverses the string
 * @a: is an int
 * @n: number
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
