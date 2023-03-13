#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Return pointer to newly allocated space in memory
 * @str: Pointer to string
 * Return: Pointer to duplicated string or NULL if fail
 */

char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dup = (char *) malloc(len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strncpy(dup, str, len + 1);
	return (dup);
}
