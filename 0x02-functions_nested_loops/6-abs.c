#include "holberton.h"

/**
 * _abs - finds absolute integers
 * @n: is the integer
 * Return: returns 0 or 1
 */

int _abs(int n)
{

    if (n < 0)
        return (-(n));
    else
        return (n);
}
