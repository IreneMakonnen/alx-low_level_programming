#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: Pointer
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
