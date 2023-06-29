#include "main.h"

/**
 * leet - Encodes string into 1337/ Leet
 * @str: Pointer to string
 * Return: Pointer to new string
 */

char *leet(char *str)
{
	int a, b;
	char *letters = "aAeEoOtTlL";
	char *replace = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (str[a] == letters[b])
			{
				str[a] = replace[b];
				break;
			}
		}
	}

	return (str);
}
