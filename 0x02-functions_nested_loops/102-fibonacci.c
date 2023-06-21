#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int first;
	unsigned long int second;
	unsigned long int sum;
	unsigned long int numbers;

	first = 1;
	second = 2;
	printf("%lu, %lu", first, second);

	for (numbers = 3; numbers <= 50; numbers++)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	printf("\n");

	return (0);
}
