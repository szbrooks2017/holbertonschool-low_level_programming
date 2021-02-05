#include <stdio.h>

/**
* main- begins the statement
*
* Return: returns the int, which is 0
*/

int main(void)
{

char a;

for (a = 'a'; a <= 'z'; a++)
if (a != 'q' && a != 'e')
putchar(a);
putchar('\n');
return (0);
}
