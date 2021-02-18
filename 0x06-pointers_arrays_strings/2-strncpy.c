#include "holberton.h"

/**
* _strncpy - copies a string
* Return: returns the pointer
* @dest: a buffer to copy the string
* @src: the source
* @n: is an int
*/

char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
		dest[copy] = src[copy];
	for ( ; copy < n; copy++)
		dest[copy] = '\0';

return (dest);
}
