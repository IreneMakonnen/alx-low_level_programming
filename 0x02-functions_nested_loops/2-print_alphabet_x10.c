#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char lowercase;

	lowercase = 'a';
	i = 0;

	while (i < 10)
	{
		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
		_putchar('\n');

		lowercase = 'a';
		i++;
	}
}
