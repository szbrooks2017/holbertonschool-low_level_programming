#include "holberton.h"
/**
* *_strstr - finds the first occurrence of a substring
* @haystack: string to search in
* @needle: string to find in haystack
* Return: returns the location of substring
*/

char *_strstr(char *haystack, char *needle)
{

	int h = 0;
	int n = 0;

	while (haystack[h])
	{
		while (needle[n])
		{
			if (haystack[h + n] != needle[n])
			{
				break;
			}
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + h);
		}
		h++;
	}
	return ('\0');
}
