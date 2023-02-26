#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The character to be checked
 * Return: abs_val (Success)
 */

int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = (-1) * n;
		return (abs_val);
	}
	return (n);
}
