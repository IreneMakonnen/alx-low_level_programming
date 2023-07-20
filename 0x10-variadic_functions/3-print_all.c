#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: Datatype list of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0;
	char *s;
	char *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					else
						printf("%s%s", separator, s);
					break;
				default:
					a++;
					continue;
			}

			separator = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}

