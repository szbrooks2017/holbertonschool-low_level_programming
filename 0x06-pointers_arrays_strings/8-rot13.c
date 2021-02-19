#include "holberton.h"
/**
* *rot13 - scrambles string
* @s: is an int
* Return: returns 0
*/

char *rot13(char *s)
{
	int i;
	int n;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (alph[n] == s[i])
			{
				s[i] = rot[n];
				break;
			}
		}
	}
	return (s);
}
