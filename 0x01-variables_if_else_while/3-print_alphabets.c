#include <stdio.h>

/**
 * main - Program prints alphabet in lowercase & uppercase
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	i = 97;
	j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
