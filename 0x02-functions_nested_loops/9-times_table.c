#include "main.h"

/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
	int R, C, Mx;

	for (R = 0; R <= 9; R++)
	{
		for (C = 0; C <= 9; C++)
		{
			Mx = R * C;
			if (C != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (Mx < 10 && C != 0)
			{
				_putchar(' ');
			}
			if (Mx >= 10)
			{
				_putchar(Mx / 10 + '0');
				_putchar(Mx % 10 + '0');
			}
			else
			{
				_putchar(Mx + '0');
			}
		}
		_putchar ('\n');
	}
}
