#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: is a string
 * Return: returns 0
 */

void _puts(char *str)
{
    while (*str)
        _putchar(*str++);
    _putchar('\n');
}
