#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings up to n bytes of s2
* @s1: string 1 to concat with string 2
* @s2: string 2 to use if n <= s2
* @n: number of bytes to concat with
* Return: returns pointer to strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, dog = n;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		dog++;

	cat = malloc(sizeof(char) * (dog + 1));
	if (cat == NULL)
		return (NULL);

	dog = 0;

	for (i = 0; s1[i]; i++)
		cat[dog++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cat[dog++] = s2[i];

	cat[dog] = '\0';

return (cat);

}
