#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, count;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		count = va_arg(args, int);

		printf("%d", count);

	if (i < n - 1 && separator != 0)
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
