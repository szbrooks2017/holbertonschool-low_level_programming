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
	unsigned int i = 0, j = 0, x, y, l = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;

	while (s2[j])
		j++;
	if (n >= j)
		l = i + j;
	else
		l = i + n;

	cat = malloc((sizeof(char) * l) + 1);
	if (cat == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		cat[x] = s1[x];
	}
	for (y = 0; y < j && y < n; y++)
		{
			cat[x] = s2[y];
			x++;
	}

return (cat);

}
