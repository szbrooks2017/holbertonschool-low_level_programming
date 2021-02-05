#include <stdio.h>

/**
* main- begins the statement
*
* Return: returns the int, which is 0
*/

int main(void)
{
int a;

for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (a = 'A'; a <= 'Z'; a++)
putchar(a);

putchar('\n');

return (0);
}
