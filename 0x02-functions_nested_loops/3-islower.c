#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: The character to print
 * Return: 1 (Success) or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
