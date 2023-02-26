#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char j;

	for (j = 1; j <= 10; j++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
