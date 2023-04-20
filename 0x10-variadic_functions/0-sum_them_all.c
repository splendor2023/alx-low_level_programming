#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of arguments
 *
 * Return: sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list aq;
		int sum = 0;
		unsigned int i;

	va_start(aq, n);

	for (i = 0; i < n; i++)
	sum += va_arg(aq, int);

	va_end(aq);

	return (sum);
}
