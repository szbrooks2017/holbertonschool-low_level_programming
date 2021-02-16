#include "holberton.h"
/**
* swap_int - swaps two integers
* @a: is an int
* @b: is an int
* Return: returns 0
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
