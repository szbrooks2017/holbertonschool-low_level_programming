#include "holberton.h"

/**
 * print_line - prints line
 * @n: is an int
 * Return: 0
 */

void print_line(int n)
{
    int a;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (a = 0; a < n; a++)
        {
            _putchar(95);
        }
        _putchar('\n');
    }
}
