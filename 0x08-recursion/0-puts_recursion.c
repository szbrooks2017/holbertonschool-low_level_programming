#include "holberton.h"

/**
* _puts_recursion - prints a string
* @s: is the string to be printed
* Return: returns nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
		}
	else
	{
		_putchar(*s++);
		}
_puts_recursion(s);

}
