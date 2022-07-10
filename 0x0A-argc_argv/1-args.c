#include <stdio.h>
#include "holberton.h"

/**
 * main - prints name from command line
 * @argc: counts arguments
 * @argv: an array of pointers
 * Return: returns 0 for success
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);

	return (0);
}
