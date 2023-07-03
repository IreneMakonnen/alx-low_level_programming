#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to be searched
 * @accept: The characters to be located
 * Return: Pointer to matching s & accept bytes or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}

	return (0);
}
