#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int q;

	while (*s)
	{
	for (r = 0; accept[q]; q++)
	{
	if (*s == accept[q])
	{
	n++;
	break;
	}
	else if (accept[q + 1] == '\0')
	return (n);
		}
		s++;
	}
	return (n);
}
