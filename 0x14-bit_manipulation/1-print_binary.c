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
	unsigned long int len = 1;
	unsigned int size = sizeof(n) * 8;
	int found_one = 0;

	while (size--)
	{
	if ((n & len) >> size)
	{
	_putchar('1');
	found_one = 1;
		}
	else if (found_one || size == 0)
	_putchar('0');

	len <<= 1;
	}


}

