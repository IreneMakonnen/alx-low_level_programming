#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of bytes
 * Return: Pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dl;
	int j;

	for (dl = 0; dest[dl] != '\0'; dl++)
	{}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[dl + j] = src[j];
	}
	dest[dl + j] = '\0';
	return (dest);
}
