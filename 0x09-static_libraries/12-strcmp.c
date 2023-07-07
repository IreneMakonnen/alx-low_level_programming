#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: First string
 * @s2: Second string
 * Return: Difference between character values
 */

int _strcmp(char *s1, char *s2)
{
	int string = 0;

	while (s1[string] != '0' && s2[string] != '\0')
	{
		if (s1[string] != s2[string])
			return (s1[string] - s2[string]);

		string++;
	}

	return (s1[string] - s2[string]);
}
