#include "main.h"

/**
 * print_line - Draws a straight line in terminal
 * @n: Number of times '_' is printed
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
}
