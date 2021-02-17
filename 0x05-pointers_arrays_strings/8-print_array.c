#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints the array
* @n: is the length
* @a: is the string
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", *(a + i));
}
printf("\n");
}
