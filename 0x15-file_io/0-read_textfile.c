#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT.
 *
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file could not be opened or read, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t t;
	ssize_t w;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
	close(fd);
	return (0);
	}

	t = read(fd, buf, letters);
	if (t == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}

	w = write(STDOUT_FILENO, buf, t);
	if (w == -1 || t != w)
	{
	free(buf);
	close(fd);
	return (0);
	}

	free(buf);
	close(fd);
	return (t);
}

