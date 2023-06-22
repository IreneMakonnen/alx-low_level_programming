#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
	}
	_putchar('\n');
}
