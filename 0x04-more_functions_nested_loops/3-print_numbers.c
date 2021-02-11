#include "holberton.h"

/**
* print_numbers - prints the numbers
*
* Return: returns 0
*/

void print_numbers(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
