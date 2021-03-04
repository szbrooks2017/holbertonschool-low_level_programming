#include <stdlib.h>
#include "holberton.h"

/*
*
*
*
*
*
*/

char *argstostr(int ac, char **av)
{
	char *string;
	int ac_len;
	int x;
	int size = ac;
	int index;

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

	index = 0;
	while (ac_len < ac)
	{
		for (x = 0; av[ac_len][x]; x++)
			string[index++] = av[ac_len][x];
		
		string[index++] = '\n';
	ac_len++;
	}
string[size] = '\0';
return (string);
}

