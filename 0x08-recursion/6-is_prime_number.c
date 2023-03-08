#include "main.h"

/**
 * is_prime_number - Check if integer is prime number
 * @n: Number
 * Return: 1 for success or 0 for fail
 */

int is_prime_number(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (0);
	}
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
