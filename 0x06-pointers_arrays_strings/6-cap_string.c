#include "holberton.h"
/**
* *cap_string - caps the string
* @s: s is for string
* Return: returns string
*/
char *cap_string(char *s)
{
	int i;
	int a;
	int spesh[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (a = 0; a <= 12; a++)
		{
			if (s[i] == spesh[a])
			{
			}
			
		}
	}
	return (s);
}

