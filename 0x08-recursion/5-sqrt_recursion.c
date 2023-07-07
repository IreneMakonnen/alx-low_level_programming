#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 *
 * Return: The square root of n, -1 if the square root is nonexistent
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - Helper function to calculate the square root recursively
 * @n: Number to calculate the square root of
 * @a: Value to check as a potential square root
 *
 * Return: -1 if the square root is nonexistent, square root of n otherwise
 */
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
