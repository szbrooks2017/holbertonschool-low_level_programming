#include "holberton.h"

/**
* _print_rev_recursion - prints a string in rev
* @s: is the string to be printed
* Return: returns nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
