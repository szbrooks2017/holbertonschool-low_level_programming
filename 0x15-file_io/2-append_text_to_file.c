#include "holberton.h"

/**
* append_text_to_file - appends to the end of a created file
* @filename: is the file name
* @text_content: is a null terminated string appended to the end
* Return: returns 1 on success or -1 if fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;


	if (filename == NULL)
		return (-1)

	if (text_content == NULL)
	text_content = "";

	while (text_content[length_bytes])
	{
		length_bytes++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
		if (o == -1)
		return (-1);

	w = write(o, text_content, length_bytes);
		if (w == -1)
		return (-1);

	close(o);
	return (1);
}

