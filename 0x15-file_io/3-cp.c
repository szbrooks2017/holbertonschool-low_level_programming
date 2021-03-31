#include "holberton.h"
/**
* main - is main
* @argc: isso
* @argv: iso
* Return: returnsl o
*/

int main(int argc, char *argv[])
{
	int inputFD, outputFD, r;
	char buf[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
		exit(98);
	}

	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(inputFD, buf, 1024)) > 0)
	{
		if (write(outputFD, buf, r) != r)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
		exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
		exit(98);
	}

	if (close(inputFD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %s\n", argv[1]);
		exit(100);
	}

	if (close(inputFD) == -1)
	{       
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %s\n", argv[2]);
		exit(100);
	}
return (0);
}
