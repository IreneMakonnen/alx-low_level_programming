#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Conctenate two strings
 * @s1: First string
 * @s2: Other string
 * Return: Pointer to new allocated space or NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *) malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, len2 + 1);

	return (result);
}
