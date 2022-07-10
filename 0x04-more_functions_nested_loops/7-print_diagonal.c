#include "holberton.h"
/**
 * print_diagonal - prints diagonal
 * @n: is an n
 * Return: 0
 */

void print_diagonal(int n)
{
    int b;
    int c;

    if (n > 0)
    {
        for (b = 0; b < n; b++)
        {
            for (c = 0; c < b; c++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
