#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - prints anything followed by a new line
 * @format: a string of characters representing arg types
 * @...: a variable number of args to be printed
 *
 */

void print_all(const char *const format, ...)
{
	va_list args;

	format_t form_types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	unsigned int index = 0;
	unsigned int j_dex;
	char *space = "";

	va_start(args, format);

	while (format != NULL && format[index] != '\0')
	{
		j_dex = 0;
		while (j_dex < 4)
		{
			if (format[index] == *form_types[j_dex].identifier)
			{
				printf("%s", space);
				form_types[j_dex].f(args);
				space = ", ";
			}
			j_dex++;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - prints a char
 * @args: arguements pointing to char
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: arguements pointing to int
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: arguements pointing to float
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: arguements pointing to int
 */

void print_string(va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", arg);
}
