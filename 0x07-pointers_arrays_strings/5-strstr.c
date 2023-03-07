#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring
 * @haystack: String
 * @needle: Substring
 * Return: Pointer to beginning substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int k;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
				break;
		}
		if (needle[k] == '\0')
			return (&haystack[j]);
	}
	return (NULL);
}
