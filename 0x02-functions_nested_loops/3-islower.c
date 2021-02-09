#include "holberton.h"

/**
 *  _islower - searches for lowercase
 *
 * @c: character
 *
 * Return: returns 1 or 0
 **/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
