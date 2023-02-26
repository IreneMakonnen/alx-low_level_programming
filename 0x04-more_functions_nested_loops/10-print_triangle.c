#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int n, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (n = 1; n <= size; n++)
	{
		for (k = 1; k <= size - n; k++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= n; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
