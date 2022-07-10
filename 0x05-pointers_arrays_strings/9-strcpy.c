#include "holberton.h"

/**
 * _strcpy - copies a string
 * Return: returns the pointer
 * @dest: a buffer to copy the string
 * @src: the source
 */

char *_strcpy(char *dest, char *src)
{
    int copy;
    int len = _strlen(src);
    for (copy = 0; copy <= len; copy++)

        dest[copy] = src[copy];

    return (dest);
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
