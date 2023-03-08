#include "main.h"

/**
 * checker - Checks if both strings have reached the end
 * @s1: String 1
 * @s2: String 2
 * Return: 1 (Success) or 0
 */

int checker(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (checker(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && checker(s1 + 1, s2))
			return (1);
	}
	if (*s1 == *s2)
		return (checker(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: 1 (Success) or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	return (checker(s1, s2));
}
