#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to string
 */

void puts_half(char *str)
{
	int ln, j, n;

	for (ln = 0; str[ln] != '\0'; ln++)

	if (ln % 2 == 0)
		n = ln / 2;
	else
		n = (ln + 1) / 2;

	for (j = n; j < ln; j++)
		_putchar(str[j]);

	_putchar('\n');
}
