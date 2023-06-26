#include "main.h"

/**
 * _puts - Prints string with new line to stdout
 * @str: String
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
