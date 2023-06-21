#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int first;
	int second;
	int sum;
	int numbers;

	first = 1;
	second = 2;
	printf("%d, %d", first, second);

	for (numbers = 3; numbers <= 50; numbers++)
	{
		sum = first + second;
		printf(", %d", sum);
		first = second;
		second = sum;
	}
	printf("\n");

	return (0);
}
