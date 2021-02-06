#include <stdio.h>

/**
 * main - outputs the function
 *
 * Return: returns 0
 */

int main(void)
{
int n;
char a;

for (n = 48; n <58; n++)
putchar(n);
for (a = 'a'; a< 'g'; a++)
putchar(a);
putchar('\n');
return (0);
}
