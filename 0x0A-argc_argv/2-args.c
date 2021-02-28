#include <stdio.h>
#include "holberton.h"

/**
* main - prints name from command line
* @argc: counts arguments
* @argv: an array of pointers
* Return: returns 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);

return (0);
}
