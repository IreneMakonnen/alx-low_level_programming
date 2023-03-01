#include "main.h"

/**
 * _strcat - Appends the src string to the dest string
 * @dest: Pointer to string
 * @src: Pointer to string
 * Return: Pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int dl;
	int j;

	for (dl = 0; dest[dl] != '\0'; dl++)
	{}
	for (j = 0; src[j] != '\0'; j++)
		dest[dl + j] = src[j];
	dest[dl + j] = '\0';

	return (dest);
}
