#include"main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: The constant byte
 * @n: Number of bytes
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
