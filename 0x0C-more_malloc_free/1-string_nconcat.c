#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 * Return: Pointer to new allocated memory or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *ptr;
	unsigned int a, b;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = (char*)malloc((len2 + 1) * sizeof(char));
	if (ptr == 0)
		return (0);

	for (a = 0; a < len1; a++)
		ptr[a] = s1[a];
	for (b = 0; b < len2; b++)
		ptr[a + b] = s2[b];

	ptr[a + b] = '\0';

	return (ptr);
}
