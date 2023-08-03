#include "main.h"

/**
 * binary_to_uint - Converts binary nmber to unsigned int
 * @b: Pointing to string of 0 & 1 chars
 * Return: Converted number or 0 if b is NULL/ not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (b == 0)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		convert = (convert << 1) + (*b - '0');
		b++;
	}

	return (convert);
}
