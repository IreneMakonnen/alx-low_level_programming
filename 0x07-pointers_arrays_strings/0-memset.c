#include "main.h"
/**
 * _memset - Fill memory with constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: Number of bytes
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
