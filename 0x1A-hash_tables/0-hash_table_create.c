#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash_table_create
 * @size: size of array
 * Return: pointer to newly created hash or NULL if error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	hash_table->size = size;
	return (hash_table);
}
