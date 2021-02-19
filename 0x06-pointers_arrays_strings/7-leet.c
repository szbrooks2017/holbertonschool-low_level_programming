#include "holberton.h"
/**
* *leet - leets man
* Return: returns 0
*/

char *leet(char *s)
{
	int j;
	int i;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numb[] = {'4', '3', '0', '7', '1'};
/*
	for (i = 0; s[i] != '\0'; i++)
*/	
	for (i = 0; s[i] != '\0'; i++)		
	{
		for (j = 0; let[j]; j++)
			if (*s == let[j])
			*s = numb[j];
	}
return (s);
}
