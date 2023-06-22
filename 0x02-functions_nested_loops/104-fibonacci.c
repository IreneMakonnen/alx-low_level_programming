#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	double first;
	double second;
	double sum;
	int numbers;

	first = 1.0;
	second = 2.0;
	printf("%.0f, %.0f", first, second);

	for (numbers = 3; numbers <= 98; numbers++)
	{
		sum = first + second;
		printf(", %.0f", sum);
		first = second;
		second = sum;
	}
	printf("\n");

	return (0);
}
