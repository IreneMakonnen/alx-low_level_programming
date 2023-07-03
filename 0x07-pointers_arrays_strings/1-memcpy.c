#include "main.h"

/**
 * _memcpy - Function copies memory area
 * @dest: Destination memory area
 * @src: Source memmory area
 * @n: Number of bytes tobe copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
