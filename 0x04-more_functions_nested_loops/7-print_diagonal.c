#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on terminal
 * @n: Number of times character is printed
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
