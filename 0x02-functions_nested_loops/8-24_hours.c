#include "holberton.h"

/**
 * jack_bauer - whoever that is
 * Return: returns 0
 */

void jack_bauer(void)
{

    int m;
    int s;
    for (m = 0; m < 24; m++)
        for (s = 0; s < 60; s++)
        {
            _putchar((m / 10) + '0');
            _putchar((m % 10) + '0');
            _putchar(58);
            _putchar((s / 10) + '0');
            _putchar((s % 10) + '0');
            _putchar('\n');
        }
}
