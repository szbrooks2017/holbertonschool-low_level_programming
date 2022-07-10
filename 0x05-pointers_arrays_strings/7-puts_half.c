#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: is a string
 * Return: returns 0
 */

void puts_half(char *str)
{
    int length = _strlen(str);
    int half;

    if (length % 2 == 0)
    {
        for (half = length / 2; half < length; half++)
            _putchar(str[half]);
        _putchar('\n');
    }
    else
    {
        for (half = (length / 2) + 1; half < length; half++)
            _putchar(str[half]);
        _putchar('\n');
    }
}

/**
 * _strlen - looks at the string
 * @s: is an int
 * Return: returns 0
 */
int _strlen(char *s)
{
    int c = 0;
    while (s[c] != '\0')
        c++;
    return (c);
}
