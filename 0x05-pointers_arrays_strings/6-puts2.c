#include "main.h"

/**
 * puts2 - Prints every other character of string starting with the first
 * @str: Pointer to string
 */

void puts2(char *str)
{
	int string;

	if (*str == '\0')
		return;

	string = 0;

	while (str[string + 1] != '\0')
	{
		_putchar(str[string]);
		string += 2;
	}

	_putchar('\n');
}
