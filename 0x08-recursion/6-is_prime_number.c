#include "main.h"

/**
 * is_prime_number - Check if integer is prime number
 * @n: Number
 * @div: Divisor
 * Return: 1 for success or 0 for fail
 */

int check(int n, int div);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}

/**
 * check - Check for prime number
 * @n: Number
 * @div: Divisor
 * Return: 1 if prime or 0 if not
 */

int check(int n, int div)
{
	if (div > n / 2)
		return (1);
	if (n % div == 0)
		return (0);
	return (check(n, div + 1));
}
