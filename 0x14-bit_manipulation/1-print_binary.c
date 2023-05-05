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
	unsigned long int mask = 1;
	unsigned int size = sizeof(n) * 8;
	int found_one = 0;

	while (size--)
	{
		if ((n & mask) >> size)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one || size == 0)
			_putchar('0');

		mask <<= 1;
	}

}


