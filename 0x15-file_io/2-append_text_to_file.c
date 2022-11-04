#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: pointer that points to the name of file
 * @text_content: string to append to the end of file
 * Return: -1 if fail or filename is NULL, if file lacks
 * write permission or does not exist, 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
