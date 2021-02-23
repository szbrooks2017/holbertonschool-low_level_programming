#include "holberton.h"

/**
* *_strpbrk - finds the first character in the string s1
* @s - is the string to be scanned
* @accept: is the string containing the characters to match
* Return: returns a pointer to thecharacter in s1
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
