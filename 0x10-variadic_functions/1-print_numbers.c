#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with a new line
 * @separator: is the string to be printed between numbs
 * @n: the number of ints passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int index;

	va_start(numb, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numb, int));

		if (separator != NULL && index != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numb);
}
