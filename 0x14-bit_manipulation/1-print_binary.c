#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Integer
 */
void print_binary(unsigned long int n)
{
	int bit_count = 0;
	int i;
	unsigned long int bits;

	for (i = 63; i >= 0; i--)
	{
		bits = (n >> i) & 1;

		if (bits == 1)
			bit_count = 1;

		if (bit_count == 1)
			_putchar('0' + bits);
	}

	if (!bit_count)
		_putchar('0');
}
