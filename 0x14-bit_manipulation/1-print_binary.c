#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: unsigned long int to be converted and printed as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j, mask = 0;
	unsigned long int len;

	for (j = 63; j >= 0; j--)
	{
		len = n >> i;

	if (len & 1)
	{
	_putchar('1');
	mask++;
	}
	else if (mask)
	_putchar('0');
	}
	if (!mask)
	_putchar('0');
}


