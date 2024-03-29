#include "holberton.h"
int _strlen(char *s);
/**
 * print_rev - prints in reverse
 * @s: is a string
 * Return: returns 0
 */

void print_rev(char *s)
{
    int i;
    int len = _strlen(s);

    for (i = len - 1; i >= 0; i--)
        _putchar(s[i]);
    _putchar('\n');
}
/**
 * _strlen - counts the length of a string
 * @s: pointer
 * Return: returns o
 */

int _strlen(char *s)
{
    int c = 0;
    while (s[c] != '\0')
        c++;
    return (c);
}
