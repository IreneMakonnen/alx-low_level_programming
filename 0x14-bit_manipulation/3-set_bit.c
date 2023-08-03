#include "main.h"

/**
 * set_bit - Sets the value of a bt to 1 at a given index
 * @n: Integer
 * @index: Index of the bit to be set
 * Return: 1 if works or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_count;

	bit_count = sizeof(unsigned long int) * 8;

	if (index < bit_count)
	{
		*n |= (1UL << index);
		return (1);
	}
	else
		return (-1);
}
