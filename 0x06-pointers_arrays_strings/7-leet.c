#include "holberton.h"
/**
* *leet - leets man
* Return: returns 0
* @s: is a string
*/

char *leet(char *s)
{
	int j;
	int i;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numb[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == let[j])
			s[i] = numb[j];
	}
return (s);
}
