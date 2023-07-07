#include "main.h"

/**
 * _puts - Prints string with new line to stdout
 * @s: String
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
