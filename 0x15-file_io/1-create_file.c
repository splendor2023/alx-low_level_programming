#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with the given name and writes the given text.
 *
 * @filename: Name of the file to create.
 * @text_content: Text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (!filename)
	return (-1);

	if (text_content)
	{
	while (text_content[count])
	count++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	w = write(fd, text_content, count);
	if (w == -1)
	{
	close(fd);
	return (-1);
	}

	close(fd);
	return (1);
}
