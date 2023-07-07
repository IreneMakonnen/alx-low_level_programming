#include "main.h"

/**
 * _sqrt_recursion - Function returns natural square root of number
 * @n: Number
 * Return: -1 if n doesn't have natural square root or the natural square root
 */

int _sqrt(int n, int a);

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}

int _sqrt(int n, int a)
{
	int sqroot;

	sqroot = a * a;

	if (sqroot > n)
		return (-1);
	if (sqroot == n)
		return (a);

	return (_sqrt(n, a + 1));
}
