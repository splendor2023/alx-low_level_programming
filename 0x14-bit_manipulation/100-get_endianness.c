#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check_endian = 1;
	char *byte_pointer = (char *)&check_endian;

	if (*byte_pointer == 1)
		return (1);

	return (0); /* Otherwise, the system is big endian */
}

