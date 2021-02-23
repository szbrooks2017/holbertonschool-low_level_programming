#include "holberton.h"
/**
* *_strstr - finds the first occurrence of a substring
* @haystack: string to search in
* @needle: string to find in haystack
* Return: returns the location of substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != haystack[i])
			return (haystack + 7);
		}
	haystack++;
	}
return ('\0');
}
/**
	for(h = 0; h[haystack] != '\0'; h++)
	{
		for(n = 0; n != '\0'; n++)
		{
			if (h[haystack] == n[needle])
			{
				return (haystack + h);
			}
		}
	}
return ('\0');
}
*/
