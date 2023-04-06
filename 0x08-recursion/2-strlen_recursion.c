#include "main.h"
/**
 * _strlen_recursion - A length of a string returns
 * @s: The string to be qauntify.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int feet = 0;

	if (*s)
	{
		feet++;
		feet += _strlen_recursion(s + 1);
	}

	return (feet);
}
