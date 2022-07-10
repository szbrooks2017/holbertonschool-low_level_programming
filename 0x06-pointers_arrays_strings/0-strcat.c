#include "holberton.h"
int _strlen(char *s);
/**
 * *_strcat - concatenates the string
 * @dest: is the destinatin
 * @src: is the source
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = _strlen(dest);
	int appending;

	for (appending = 0; appending < dest_length; appending++)

		dest[dest_length + appending] = src[appending];
	dest[dest_length + appending] = '\0';
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
