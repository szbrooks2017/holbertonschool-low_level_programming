#include <stdio.h>

/**
* main - prints all combos of 3 digits
* Return: returns 0
*/

int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = 0; dig2 < 9; dig2++)
		{
			for (dig3 = 0; dig3 < 9; dig3++)
			{
				if (dig1 < dig2 && dig2 < dig3)
				{
					putchar((dig1 % 10) + '0');
					putchar((dig2 % 10) + '0');
					putchar((dig3 % 10) + '0');

					if (dig1 == 7 && dig2 == 8 && dig3 == 9)
						continue;
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
