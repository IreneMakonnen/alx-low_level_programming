#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string (to be appended)
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *primary = dest;

	while (*primary != '\0')
		primary++;

	while (*src != '\0')
	{
		*primary = *src;
		primary++;
		src++;
	}

	*primary = '\0';

	return (dest);
}
