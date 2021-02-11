#include "holberton.h"

/**
* print_most_numbers - prints all but 2 and 4
* Return: returns the input
*/

void print_most_numbers(void)
{
int n;

for (n = 48; n < 57; n++)
{
if (n == 50 || n == 52)
continue;
else
_putchar(n);
}
_putchar('\n');
}
