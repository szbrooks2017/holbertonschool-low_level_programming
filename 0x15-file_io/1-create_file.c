#include "holberton.h"
/**
* create_file - creates a file or truncates if it exist
* @filename: name of file to create
* @text_content: is a null terminated string to write to file
* Return: returns 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, length_bytes = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[length_bytes])
	{
		length_bytes++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	w = write(o, text_content, length_bytes);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
