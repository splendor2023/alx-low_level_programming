#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file to append to.
 * @text_content: Text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, w, len = 0;

	if (!filename)
	return (-1);

	if (text_content)
	{
	while (text_content[len])
	len++;
	}

	count = open(filename, O_WRONLY | O_APPEND);
	if (count == -1)
	return (-1);

	w = write(count, text_content, len);
	if (w == -1)
	{
	close(count);
	return (-1);
	}

	close(count);
	return (1);
}

