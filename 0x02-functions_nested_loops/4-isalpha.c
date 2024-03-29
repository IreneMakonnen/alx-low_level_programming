#include "main.h"

/**
 * _isalpha - Function checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 if c is a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
