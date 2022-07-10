#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings with new line
 * @separator: string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	char *string;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
