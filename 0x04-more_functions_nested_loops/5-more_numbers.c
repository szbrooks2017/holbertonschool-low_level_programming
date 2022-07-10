#include "holberton.h"

/**
 * more_numbers - checks for certain numbers
 * Return: returns 0
 */

void more_numbers(void)
{
    int i;
    int n;

    for (n = 0; n < 10; n++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
            {
                _putchar((i / 10) + '0');
            }
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}
