#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: Pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; str < n && src[str] != '\0'; str++)
		dest[str] = src[str];

	for (; str < n; str++)
		dest[str] = '\0';

	return (dest);
}
