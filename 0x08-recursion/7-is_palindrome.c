#include "holberton.h"
int _pali(char *s, char *z);
int _strlen_recursion(char *s);
/**
* is_palindrome - returns a palindrome
* @s: is a string
* Return: returns the string
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *a;
	char *z;

	a = s;
	z = (s + len - 1);

	return (_pali(a, z));
}

/**
* _pali - is a palilndrone
* @s: is a string
* @z: is a string
* Return: returns the pali
*/

int _pali(char *s, char *z)
{
	if (*s != *z)
	{
		return (0);
	}
	else if (s >= z)
	{
		return (1);
	}
	else
	{
		return (_pali(s + 1, z - 1));
}
}
/**
* _strlen_recursion - counts the length of a line
* @s: is a string
* Return: returns nothing
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

