#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 *
 */

char *_strdup(char *str)
{
	int len = 0, a = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * len + 1);

	if (duplicate == NULL)
		return (NULL);

	while (a < len)
	{
		duplicate[a] = str[a];

		a++;
	}
	duplicate[a] = '\0';

	return (duplicate);
}
