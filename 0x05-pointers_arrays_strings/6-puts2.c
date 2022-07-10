#include "holberton.h"
/**
 * puts2 - prints a string
 * @str: prints a string
 */

void puts2(char *str)
{
    int i = 0;
    while (*str)
    {
        if (i++ % 2 == 0)
            _putchar(*str);
        str++;
    }
    _putchar('\n');
}
