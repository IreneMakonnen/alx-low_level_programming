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
	int print = 0;

	va_start(args, format);
	while (*fptr)
	{
		if (print)
		{
			if (*fptr == 'c' || *fptr == 'i' || *fptr == 'f' || *fptr == 's')
				printf(", ");
		}
		switch (*fptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				print = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				print = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print = 1;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != 0)
					printf("%s", s);
				else
					printf("(nil)");
				print = 1;
				break;
		}
		fptr++;
	}
	va_end(args);
	printf("\n");
}
