#include "holberton.h"
int _strlen(char *s);
/**
* rev_string - reverses the string
* @s: is an int
* _strlen - finds teh length
*/

void rev_string(char *s)
{
char length = _strlen(s);
int i;
int j;
for (i = 0, j = length - 1; i < j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
/**
* _strlen - looks at the string
* @s: is an int
* Return: returns 0
*/
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
