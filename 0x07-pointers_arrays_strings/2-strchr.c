#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Pointer of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
