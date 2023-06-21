#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned int first;
	unsigned int second;
	unsigned int sum;
	unsigned int numbers;

	first = 1;
	second = 2;
	printf("%u, %u", first, second);

	for (numbers = 3; numbers <= 50; numbers++)
	{
		sum = first + second;
		printf(", %u", sum);
		first = second;
		second = sum;
	}
	printf("\n");

	return (0);
}
