#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: is the string to be scanned
 * @accept: string containing the characters to match
 * Return: returns the number of characters in s1 which only consists of s2
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
