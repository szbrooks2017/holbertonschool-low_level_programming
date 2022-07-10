#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all the ints
 * @n: the number of parameters passed into the function
 * @...: a variable number of parameters to pass into the function
 * Return: returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	unsigned int sum = 0;

	va_start(args, n);

	for (index = 0; index < n; index++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
