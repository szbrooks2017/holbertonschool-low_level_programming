#include "holberton.h"
/**
* *string_toupper - puts the string
* @s: s is for string
* Return: returns s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i[s] >= 'a' && i[s] <= 'z')
		{
			i[s] = i[s] - 32;
		}
	i++;
	}
	return (s);
}
