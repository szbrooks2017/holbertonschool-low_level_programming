#include "holberton.h"

/**
 * _isalpha - searches alphabet
 * @c: int c
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
