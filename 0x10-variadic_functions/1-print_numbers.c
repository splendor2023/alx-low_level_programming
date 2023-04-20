#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of arguments (integers)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;


	va_start(args, n);


	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(args);
}
