#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int first, second, sum;
	int numbers;

	first = 1;
	second = 2;
	sum = 0;
	printf("%lu, %lu", first, second);

	for (numbers = 3; numbers <= 92; numbers++)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}

	for (numbers = 93; numbers <= 98; numbers++)
        {
                sum = first + second;
                printf(", %lu", sum);
                first = second;
                second = sum;
        }
	printf("\n");

	return (0);
}
