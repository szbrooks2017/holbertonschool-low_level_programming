#include "holberton.h"

/**
* *_memcpy - copies memory area to dest
* @dest: is the area that gets copied too
* @src: is what is being copied
* @n: unisigned length of src
* Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
