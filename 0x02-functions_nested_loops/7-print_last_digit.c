#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: is the integer run through the test
 * Return: is what's returned
 */

int print_last_digit(int n)
{
    int i = n % 10;
    if (i >= 0)
    {
        _putchar(i + '0');
        return (i);
    }
    else
    {
        _putchar((-1 * i) + '0');
        return (i * -1);
    }
    return (0);
}
