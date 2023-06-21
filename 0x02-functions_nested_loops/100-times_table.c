#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: Number to be input
 */

void print_times_table(int n)
{
	int a;
	int b;
	int multiply;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			multiply = a * b;

			if (b != 0)
				_putchar(',');
			if (multiply <= 10 && b != 0)
				_putchar(' ');
			if (multiply < 100 && b != 0)
				_putchar(' ');
			if (multiply >= 100)
			{
				_putchar((multiply / 100) + '0');
				_putchar(((multiply /10) % 10) + '0');
			}
			else if (multiply >= 10)
			{
				_putchar((multiply / 10) + '0');
			}
			_putchar((multiply % 10) + '0');
			
		}
		_putchar('\n');
	}
}
