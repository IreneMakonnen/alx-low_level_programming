#include "main.h"

/**
 * factorial - Returns factorial of given number
 * @n: Number
 * Return: -1 if it's an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
