#include "main.h"

/**
 * puts2 - Prints every other character of string starting with the first
 * @str: Pointer to string
 */

void puts2(char *str)
{
	if (*str == '\0')
		return;

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
