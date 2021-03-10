#include <stdio.h>

/**
* main - prints combo of two digits
* Return: returns 0
*/

int main(void)
{
	int dig1, dig2;

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{
		for (dig2 = '0'; dig2 <= '9'; dig2++)
		{
			if (dig1 < dig2)
			{
				putchar(dig1);
				putchar(dig2);

				if (dig1 != '8' || (dig1 == '8' && dig2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
