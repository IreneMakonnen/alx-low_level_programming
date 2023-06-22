#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size - row; column++)
				_putchar(' ');
			for (column = 1; column <= row; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
