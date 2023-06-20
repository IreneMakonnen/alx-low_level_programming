#include "main.h"

/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
	int n1;
	int n2;
	int multiplied;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			multiplied = n1 * n2;

			if (multiplied <= 9)
			{
				if (n2 != 0)
					_putchar(' ');
				_putchar(multiplied + '0');
			}
			else
			{
				_putchar((multiplied / 10) + '0');
				_putchar((multiplied % 10) + '0');
			}
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
