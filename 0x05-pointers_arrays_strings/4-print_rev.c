#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to string
 */

void print_rev(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{
	}
	for (q--; q >= 0; q--)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}
