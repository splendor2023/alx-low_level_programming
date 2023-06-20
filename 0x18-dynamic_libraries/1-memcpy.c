#include "main.h"
/**
 * _memcpy - a fubction that copies memory area
 *@src: memory where bytes is copied
 *@dest: memory where bytes is stored
 *@n: number of byte
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int j = n;

	for (; y < j; y++)
	{
	dest[y] = src[y];
	n--;
	}
	return (dest);
}
