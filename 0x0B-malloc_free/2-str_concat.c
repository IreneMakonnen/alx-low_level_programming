#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to be copied
 * @s2: Second copied string
 * Return: Pointer to newly allocated space in memory or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int n;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	str = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == 0)
		return (0);

	for (n = 0; n < len1; n++)
		str[n] = s1[n];

	for (n = 0; n < len2; n++)
		str[len1 + n] = s2[n];

	str[len1 + len2] = '\0';

	return (str);
}
