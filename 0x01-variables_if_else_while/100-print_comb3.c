#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= 8)
	{
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');

	return (0);
}
