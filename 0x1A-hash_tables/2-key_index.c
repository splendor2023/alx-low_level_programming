#include "hash_tables.h"

/**
 * key_index - key_index
 * @key: the keyword
 * @size: the size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, r_key;

	r_key = hash_djb2(key);
	index = r_key % size;
	return (index);
}
