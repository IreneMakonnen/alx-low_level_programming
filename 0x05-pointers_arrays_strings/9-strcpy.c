#include "main.h"

/**
 * _strcpy - Copy string pointed to src
 * @dest: Pointer
 * @src:Pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
