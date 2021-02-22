#include "holberton.h"
/**
* _strspn - a function that gets the length of a prefix substring
* @s: is the string to be scanned
* @accept: string containing the characters to match
* Return: returns the number of characters in s1 which only consists of s2
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
		if (accept[j] == '\0')
		return (i);
		}
	}
return (i);
}
