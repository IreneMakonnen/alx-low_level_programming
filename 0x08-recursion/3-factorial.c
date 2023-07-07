#include "main.h"

/**
 * factorial - Function returns factorial of given number
 * @n: Number
 * Return: If n < 0, error (-1)
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
