#include "main.h"

/**
 * flip_bits - Returns flipped bits count getting from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int flipped_bits = 0;

	while (XOR != 0)
	{
		flipped_bits += XOR & 1;
		XOR >>= 1;
	}

	return (flipped_bits);
}
