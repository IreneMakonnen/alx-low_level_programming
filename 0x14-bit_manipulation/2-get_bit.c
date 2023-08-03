#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index
 * @n: Integer
 * @index: Index of the bit you want to get
 * Return: Value of bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_count, bit_value;

	bit_count = sizeof(unsigned long int) * 8;

	if (index < bit_count)
	{
		bit_value = (n >> index) & 1;
		return (bit_value);
	}
	else
		return (-1);
}
