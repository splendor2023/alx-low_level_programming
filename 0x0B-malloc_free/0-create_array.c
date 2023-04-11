#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 *
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;


	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arr[j] = c;

	return (arr);
}
