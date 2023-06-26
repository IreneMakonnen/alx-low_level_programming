#include "main.h"

/**
 * puts2 - Prints every other character of string starting with the first
 * @str: Pointer to string
 */

void puts2(char *str)
{
	int string;
	int length;

	if (*str == '\0')
		return;

	length = 0;

	while (str[length] != '\0')
		length++;

	for (string = 0; string < length; string += 2)
		_putchar(str[string]);

	_putchar('\n');
}
