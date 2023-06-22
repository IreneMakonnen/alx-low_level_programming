#include "main.h"

/**
 * print_line - Draws straight line in terminal
 * @n: Number of times character should be printed
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
