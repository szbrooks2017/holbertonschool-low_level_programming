#include "holberton.h"

/**
* read_textfile - reads and prints to standard output
* @filename: is the pathname for open
* @letters: is the size
* Return: if the function fails then NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	return (0);

	o = open(filename, O_RDONLY, 600);
	if (o == -1)
	return (0);

	r = read(o, buff, letters);
	if (r == -1)
	return (0);

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	return (0);

	free(buff);
	close(o);
	return (w);
}
