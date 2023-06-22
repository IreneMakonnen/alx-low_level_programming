#include <stdio.h>

/**
 * main - Finds & prints largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long int number;
	unsigned long int factor;

	number = 612852475143;
	factor = 2;

	while (factor * factor <= number)
	{
		if (number % factor == 0)
			number /= factor;
		else
			factor++;
	}
	if (number > factor)
		factor = number;
	
	printf("%lu\n", factor);

	return (0);
}
