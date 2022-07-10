#include "holberton.h"

/**
 * *_memset - fills the memory with a constant byte
 * @s: is the pointer to n
 * @b: is the value
 * @n: is the length of what is to be filled
 * Return: returns a pointre to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s, val = b;

	for (i = 0; i < n; i++)
		i[s] = val;

	return (mem);
}
