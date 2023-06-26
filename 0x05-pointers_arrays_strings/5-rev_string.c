#include "main.h"

/**
 * rev_string - Reverses string
 * @s: Pointer to string
 */

void rev_string(char *s)
{
	int string;
	int begin;
	int end;
	char temporary;

	string = 0;
	begin = 0;

	if (*s == '\0')
		return;

	while (s[string] != '\0')
	{
		string++;
	}

	end = string - 1;

	while (begin < end)
	{
		temporary = s[begin];
		s[begin] = s[end];
		s[end] = temporary;

		begin++;
		end--;
	}
}
