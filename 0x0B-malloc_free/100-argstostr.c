#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the new string.
 *         NULL if @ac == 0 or @av == NULL or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			b++;
	}
	l += ac;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[len] = av[i][j];
		len++;
	}
	if (str[len] == '\0')
	{
		str[len++] = '\n';
	}
	}
	return (str);
}
