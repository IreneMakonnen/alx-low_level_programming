#include "main.h"

/**
 * puts_half - Prints second half of string followed by new line
 * @str: Pointer to string
 */

void puts_half(char *str)
{
	int string;
	int length;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	length = 0;
	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		string = length / 2;
	else
		string = (length - 1) / 2;

	for (; str[string] != '\0'; string++)
		_putchar(str[string]);

	_putchar('\n');
}
