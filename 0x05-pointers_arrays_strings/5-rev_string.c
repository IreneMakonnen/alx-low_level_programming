#include "main.h"

/**
 * rev_string - Reverse string
 * @s: Pointer to string
 */

void rev_string(char *s)
{
	int ln, m;
	char j;

	for (ln = 0; s[ln] != '\0'; ln++)
	{
	}
	for (m = 0; m < ln / 2; m++)
	{
		j = s[m];
		s[m] = s[ln - m - 1];
		s[ln - m - 1] = j;
	}
}
