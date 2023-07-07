#include "main.h"

/**
 * _abs - Computes absolute integer value
 * @n: Integer to be checked
 * Return: -n if numbr is a negative or n if positive
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);

	return (0);
}
