#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s != 0)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1 && separator != 0)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
