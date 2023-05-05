#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_count;
	unsigned int flip_current = 0;

	xor_count = n ^ m;

	while (xor_count != 0)
	{
		if ((xor_count & 1) == 1) /* Check if the least significant bit is 1 */
			flip_current++; /* Increment the flip current if it is */

	xor_count >>= 1;
	}

	return (flip_current);
}

