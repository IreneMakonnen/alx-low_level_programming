#include "main.h"

/**
 * cap_string - Capitalizes all words of string
 * @str: Pointer to string
 * Return: Pointer to new string
 */

char *cap_string(char *str)
{
	int i = 0;
	int capital = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capital = 1;
		}
		else if (capital)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;

			capital = 0;
		}

		i++;
	}

	return (str);
}
