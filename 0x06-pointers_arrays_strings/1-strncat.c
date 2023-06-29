#include "main.h"

/**
 * _strncat - Concatenates two string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *primary = dest;

	while (*primary != '\0')
		primary++;

	while (*src != '\0' && n > 0)
	{
		*primary = *src;
		primary++;
		src++;
		n--;
	}

	*primary = '\0';

	return (dest);
}
