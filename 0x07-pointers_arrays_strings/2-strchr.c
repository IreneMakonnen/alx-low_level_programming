#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Pointer to first occurrence of character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (&s[a]);
		a++;
	}

	return (0);
}
