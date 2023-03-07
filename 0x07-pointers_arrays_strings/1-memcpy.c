#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Memory area at dest
 * @src: Memory area at source
 * @n: Number of bytes
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
