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
	const char *fptr = format;
	char *s;

	va_start(args, format);

	while (*fptr)
	{
		switch (*fptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != 0)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		if (fptr[1])
			printf(", ");
		fptr++;
	}
	va_end(args);
	printf("\n");
}
