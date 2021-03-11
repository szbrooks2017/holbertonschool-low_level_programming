#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the results the simple
* @argc: the number of arguements supplied to the program
* @argv: an array of pointers to the arguments
* Return: returns 0
*/

int main(argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n")
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}


printf("d\n", operator(atoi(argv[1], atoi(argv[3])));
return (0);
}
