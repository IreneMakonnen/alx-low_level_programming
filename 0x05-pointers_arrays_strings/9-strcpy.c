#include "main.h"

/**
 * _strcpy - Copies the string (*src) to buffer (*dest)
 * @dest: Pointer to buffer
 * @src: Pointer to string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];

	dest[c] = '\0';

	return (dest);
}
