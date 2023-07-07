#include "main.h"

/**
 * str_length - Checks for length
 * @s: String
 * Return: String length
 */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_length(s + 1));
}

/**
 * empty_str - Check if string is empty
 * @s: String
 * @first: First character
 * @last: Last character
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int empty_str(char *s, int first, int last)
{
	if (first >= last)
		return (1);

	if (s[first] != s[last])
		return (0);

	return (empty_str(s, first + 1, last - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (empty_str(s, 0, length - 1));
}
