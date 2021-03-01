#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* main - is the main argument
* @argc: number of arguments
* @argv: array of arguments
* Return: returns 1 if false and 0 if true
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
