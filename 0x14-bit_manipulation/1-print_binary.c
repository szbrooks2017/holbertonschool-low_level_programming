#include "holberton.h"

/**
* print_binary - prints the binary
* @n: is the number to be converted
*
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	putchar((n & 1) + '0');
}
