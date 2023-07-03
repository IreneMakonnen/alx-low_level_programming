#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Pointer to first occurrence of character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
