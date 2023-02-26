#include "main.h"

/**
 * _isalpha - Checks for an alphabetic charcter
 * @c: The character to check
 * Return: 1 (Success) or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
