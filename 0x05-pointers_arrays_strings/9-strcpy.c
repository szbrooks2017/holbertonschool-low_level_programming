#include "holberton.h"

/**
* _strcpy - copies a string
*
* @dest: a buffer to copy the string
* @src: the source
*/

char *_strcpy(char *dest, const char *src)
{
int copy = 0;

while (src[copy])
{
dest[copy] = src[copy];
copy++;
}
return (dest);
}
