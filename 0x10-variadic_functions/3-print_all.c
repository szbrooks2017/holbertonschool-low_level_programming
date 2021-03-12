#include "variadic_functions.h"

/**
* print_all - prints anything followed by a new line
* @format: a string of characters representing arg types
* @...: a variable number of args to be printed
*
*/

void print_all(const char * const format, ...)
{
	va_list args;

	form_t form_types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_string },
		};

	unsigned int index = 0;
	unsigned int j_dex;

	va_start(args, format);

	/*loop that goes through format*/
	while (format[index])
	{
		/*the stuff*/

	{

	index++;
	}
	va_end(args);
	printf("\n");
}

/**
* print_char - prints a char
* @arg: arguements pointing to char
*/

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_int - prints an int
* @arg: arguements pointing to int
*/

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @arg: arguements pointing to float
*/

void print_float(va_list args)
{
	printf("%s", va_arg(args, double));
}

/**
* print_string - prints a string
* @arg: arguements pointing to int
*/

void print_string(va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		print("(nil)");
		return;
	}

	printf("%s", arg);
}
