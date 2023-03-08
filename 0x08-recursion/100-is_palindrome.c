#include "main.h"

/**
 * is_palindrome - Check if string is a palindrome
 * @s: String to check
 * Return: 1 for success of 0 for fail
 */

int is_palindrome(char *s)
{
	int len;
	char *p1;
	char *p2;

	if (*s == '\0')
		return (1);

	len = 1;

	while (*(s + len) != '\0')
	{
		len++;
	}
	p1 = s;
	p2 = s + len - 1;

	while (p1 < p2)
	{
		if (*p1 != *p2)
			return (0);
		p1++;
		p2--;
	}

	return (1);
}
