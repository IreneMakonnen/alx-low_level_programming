#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Functon returns pointer to allocated memory with copy of string
 * @str: Pointer to string
 * Return: Pointer to duplicated string or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s = 0;
	unsigned int length = 0;
	unsigned int n;

	if (str == 0)
		return (0);

	while (str[length] != '\0')
		length++;

	s = (char *)malloc(sizeof(char) * (length + 1));

	if (s == 0)
		return (0);

	for (n = 0; n < length; n++)
		s[n] = str[n];

	return (s);
}
