#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Pointer to first occurrence of character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (0);
}
