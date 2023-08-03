#include "main.h"

/**
 * get_endianness - Checks endianness 
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n;

	return ((*ptr == 1) ? 1 : 0);
}
