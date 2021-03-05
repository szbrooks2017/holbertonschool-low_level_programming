#include <stdlib.h>
#include "holberton.h"

/**
* _calloc - allocates mem beg with 0
* @size: the byte size of each array element
* @nmemb: number of elements
*
* Return: returns a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, len = 0;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	str = malloc(len);

	if (str == NULL)
		return (NULL);

	while (i < len)
	{
		str[i] = '\0';
		i++;
	}

return (str);
}
