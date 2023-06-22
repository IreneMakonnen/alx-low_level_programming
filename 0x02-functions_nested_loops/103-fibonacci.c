#include <stdio.h>

/**
 * main - Prints sum of even Fibonacci numbers whose values don't exceed 400000
 * Return: 0
 */

int main(void)
{
	unsigned long int first;
	unsigned long int second;
	unsigned long int sum;
	unsigned long int even_sum;

	first = 1;
	second = 2;
	sum = 0;
	even_sum = 2;

	while (sum <= 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
		first = second;
		second = sum;
	}
	printf("%lu\n", even_sum);

	return (0);
}
