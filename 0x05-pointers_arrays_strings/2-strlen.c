#include "main.h"

/**
 * _strlen - The length of string
 * @s: Pointer to string
 * Return: l
 */

int _strlen(char *s)
{
	int ln;

	for (ln = 0; s[ln] != '\0'; ln++)
	{
		_putchar(s[ln]);
	}
	return (ln);
}
