#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by new line
 * @s: String
 */

void print_rev(char *s)
{
	int string;
	int str;

	string = 0;

	while (s[string] != '\0')
	{
		string++;
	}

	for (str = string - 1; str >= 0; str--)
	{
		_putchar(s[str]);
	}

	_putchar('\n');
}
