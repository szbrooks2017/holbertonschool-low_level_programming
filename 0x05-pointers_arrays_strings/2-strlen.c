#include "holberton.h"

/**
* strlen - strlen in standard lib
* @str: is a string
* Return: returns 0
*/

int _strlen(char *str)
{

int len = 0;

while (*str++)
len++;
return (len);

}
