#include "main.h"
/**
 * cap_string - Capitalizes words
 * @st: String
 * Return: Pointer to new string
 */

char *cap_string(char *st)
{
	int j;

	if (st[0] >= 'a' && st[0] <= 'z')
		st[0] -= 32;
	for (j = 0; st[j] != '\0'; j++)
	{
		if ((st[j - 1] == ' ' ||
			st[j - 1] == '\t' ||
			st[j - 1] == '\n' ||
			st[j - 1] == ',' ||
			st[j - 1] == ';' ||
			st[j - 1] == '.' ||
			st[j - 1] == '!' ||
			st[j - 1] == '?' ||
			st[j - 1] == '"' ||
			st[j - 1] == '(' ||
			st[j - 1] == ')' ||
			st[j - 1] == '{' ||
			st[j - 1] == '}') &&
			(st[j] >= 'a' && st[j] <= 'z'))
			st[j] -= 32;
	}
	return (st);
}
