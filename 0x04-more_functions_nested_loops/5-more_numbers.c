#include "main.h"

/**
 * more_numbers - Prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int times;
	int n;

	for (times = 0; times < 10; times++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
