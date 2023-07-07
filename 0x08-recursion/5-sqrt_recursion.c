#include "main.h"

/**
 * _sqrt_recursion - Function returns natural square root of number
 * @n: Number
 * Return: -1 if n doesn't have natural square root or the natural square root
 */

int _sqrt_recursion(int n)
{
	int first;
	int last;

	if (n == 0 || n == 1)
		return (n);

	first = 1;
	last = n;

	while (first <= last)
	{
		int average = (first + last) / 2;

		if (average * average == n)
			return (average);
		else if (average * average < n)
			first = last + 1;
		else
			last = last - 1;
	}

	return (-1);
}
