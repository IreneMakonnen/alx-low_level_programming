#include "main.h"

/**
 * string_toupper - Change lowercase letters to uppercase
 * @st: Pointer to string
 * Return: st
 */

char *string_toupper(char *st)
{
	int j;

	for (j = 0; st[j] != '\0'; j++)
	{
		if (st[j] >= 'a' && st[j] <= 'z')
		{
			st[j] = st[j] - ('a' - 'A');
		}
	}
	return (st);
}
