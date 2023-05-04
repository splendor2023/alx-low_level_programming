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
	unsigned int len = 0;
	unsigned int i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	len = len << 1;
	else if (b[i] == '1')
	len = (len << 1) | 1;
	else
	return (0);
	}

	return (len);

}
