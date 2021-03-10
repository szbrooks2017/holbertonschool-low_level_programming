#include <stdio.h>

/**
* main - prints all combinations of two digits
* Return: returns 0
*/

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 98; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(' ');
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 == 98 && dig2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
