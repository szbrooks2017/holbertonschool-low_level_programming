#include "holberton.h"

/**
* _puts_recursion - prints a string
* @s: is the string to be printed
* Return: returns nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	}
}
