#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates strings
 * @ac: size of string
 * @av: string to concatenate
 * Return: returns a pointer to the string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int ac_len;
	int x, n;
	int size = ac;
	char *newstring;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (ac_len = 0; ac_len < ac; ac_len++)
	{
		for (x = 0; av[ac_len][x]; x++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);
	if (string == NULL)
		return (NULL);

	newstring = string;
	ac_len = 0;

	while (ac_len < ac)
	{
		for (n = 0; av[ac_len][n]; n++)
		{
			*string++ = av[ac_len][n];
		}
		*string++ = '\n';
		ac_len++;
	}
	*string = '\0';
	return (newstring);
}
