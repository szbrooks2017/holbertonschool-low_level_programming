#include <stdio.h>
#include <stdlib.h>

/**
* main - is the main argument
* @argc: number of arguments
* @argv: array of arguments
* Return: returns 1 if false and 0 if true
*/

int main(int argc, char *argv[])
{
	int i, digit;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' && argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
	}	
	printf("%d\n", sum);
return (0);
}
