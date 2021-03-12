#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

typedef struct form_types
{
	char *symbol;
	void (*print)(va_list args);
} format_t;
#endif
