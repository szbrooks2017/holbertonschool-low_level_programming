#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* main - prints name from command line
* @argc: counts arguments
* @argv: an array of pointers
* Return: returns 0 for success
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

