#include "holberton.h"

/**
* _isupper - Looks for upper.
* @c: is an int
* Return: returns an int
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
