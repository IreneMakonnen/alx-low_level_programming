#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: Number to be input
 */
void print_times_table(int n)
{
	int a, b, multiply;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				multiply = a * b;

				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (multiply <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multiply + '0');
				}
				else if (multiply <= 99)
				{
					_putchar(' ');
					_putchar((multiply / 10) + '0');
					_putchar((multiply % 10) + '0');
				}
				else
				{
					_putchar(multiply / 100 + '0');
					_putchar((multiply / 10) % 10 + '0');
					_putchar(multiply % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
