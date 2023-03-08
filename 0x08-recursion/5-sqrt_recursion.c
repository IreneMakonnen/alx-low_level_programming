#include "main.h"

/**
 * find - Find square root
 * @n: Number
 * @sqrt: Square root number
 * Return: Natural square root of n or -1 if fail
 */

int find(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (find(n, sqrt + 1));
}

/**
 * _sqrt_recursion - Returns natural square root of number
 * @n: Number
 * Return: Natural square root of n or -1 if fail
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find(n, 0));
}
