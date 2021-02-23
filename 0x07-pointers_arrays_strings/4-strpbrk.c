#include "holberton.h"
char *_strchr(char *s, char c);
/**
* *_strpbrk - finds the first character in the string s1
* @s - is the string to be scanned
* @accept: is the string containing the characters to match
* Return: returns a pointer to thecharacter in s1
*/

char *_strpbrk(char *s, char *accept)
{
	if ((s == '\0') || (accept == '\0'))
		return ('\0');
	while (*s)
	{
		if (_strchr(accept, *s))
		{
		return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
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
