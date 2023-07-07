#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to be searched
 * @needle: Substring to be searched for
 * Return: Pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);

		haystack++;
	}

	return (0);
}
