#include "main.h"

/**
 * print_diagonal- Draws straight line in terminal
 * @n: Number of times character should be printed
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
