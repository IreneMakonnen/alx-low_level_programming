#include "main.h"

/**
 * _puts - Print a string
 * @str: Pointer to string
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
