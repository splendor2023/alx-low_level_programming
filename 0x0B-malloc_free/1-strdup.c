#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if memory is insuficient
 */
char *_strdup(char *str)
{
	char *abc;
	int r, len = 0;


	if (str == NULL)

		return (NULL);

	r = 0;

	while (str[r] != '\0')
		r++;


	abc = malloc(sizeof(char) * (r + 1));

	if (abc == NULL)

		return (NULL);


	for (len = 0; str[len]; len++)

		aaa[len] = str[len];

	return (abc);
}
