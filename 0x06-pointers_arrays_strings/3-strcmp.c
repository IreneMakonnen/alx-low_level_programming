#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2:Other string to compare
 * Return: s1[j] - s2[j]
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] == s2[j]; j++)
	{
		if (s1[j] == '\0')
			return (0);
	}
	return (s1[j] - s2[j]);
}
