#include "main.h"

/**
 * prime - Check for prime number
 * @n: Number
 * @divisible: Check divisibility
 * Return: 1 if prime otherwise 0
 */
int prime(int n, int divisible)
{
	if (n <= 1)
		return (0);
	if (divisible == 1)
		return (1);
	if (n % divisible == 0)
		return (0);

	return (prime(n, divisible - 1));
}

/**
 * is_prime_number - 1 if the input integer is prime number, otherwise return 0
 * @n: Number
 * Return: 1 if prime nmber otherwise 0
 */
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
