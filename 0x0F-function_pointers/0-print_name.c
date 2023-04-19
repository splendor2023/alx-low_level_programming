#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to a character array
 * @f: function pointer that takes in a character array and returns nothing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
