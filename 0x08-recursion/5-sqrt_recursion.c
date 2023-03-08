#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root of number
 * @n: Number
 * Return: Natural square root of n or -1 if fail
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
		else if (i * i > n)
			return (-1);
	}

	return (-1);
}
