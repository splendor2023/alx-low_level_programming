#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 on success, or a non-zero error code on failure.
 */
int main(int argc, char **argv)
{
	int cp_from, cp_to, r, w, c;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (cp_to == -1)
	{
	close(cp_from);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	while ((r = read(cp_from, buffer, BUFFER_SIZE)) > 0)
	{
	w = write(cp_to, buffer, r);
	if (w == -1)
	{
	close(cp_from);
	close(cp_to);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	}
	if (r == -1)
	{
	close(cp_from);
	close(cp_to);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	c = close(cp_from);
	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_from);
	exit(100);
	}
	c = close(cp_to);
	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to);
	exit(100);
	}

	return (0);
}
