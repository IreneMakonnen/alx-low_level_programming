#include "main.h"

/**
 * puts2 - Prints every other character of string starting with the first
 * @str: Pointer to string
 */

void puts2(char *str)
{
	int string;

	string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string += 2;
	}

	if (*str == '\0')
		return;

	_putchar('\n');
}
