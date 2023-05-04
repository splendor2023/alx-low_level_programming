#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of 0 and 1 chars representing binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int len = 0;

	if (!b)
	return (0);

	for (j = 0; b[j]; j++)
	{
	if (b[j] < '0' || b[j] > '1')
	return (0);
	len = 2 * len + (b[j] - '0');
	}
	return (len);
}
