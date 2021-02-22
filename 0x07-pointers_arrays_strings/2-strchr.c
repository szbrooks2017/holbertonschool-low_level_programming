#include "holberton.h"
/**
* *_strchr - returns a pointer to the first occurence of c
* @s: is a string
* @c: is being replaced with an int pointer
* Return: returns the string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
return ('\0');
}
