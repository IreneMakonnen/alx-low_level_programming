#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
