#include "main.h"

/**
 * puts2 - Print every other string character
 * @str: Pointer to string
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s += 2)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
