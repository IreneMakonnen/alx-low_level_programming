#include <stdio.h>

/**
 * main - Program prints single digits of base 10 from 0 only using putchar
 * Return: 0
 */

int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');

	return (0);
}
