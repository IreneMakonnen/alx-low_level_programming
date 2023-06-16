#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i++);
	}
	printf("\n");

	return (0);
}
