#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Number to be printed
 */

void print_to_98(int n)
{
	int j;

	for (j = n; j <= 98; j++)
	{
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		if (j != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
