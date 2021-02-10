#include <stido.h>

/**
* print_to_98 - prints 98
* @n: number
* Return; returns 9
*/

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
