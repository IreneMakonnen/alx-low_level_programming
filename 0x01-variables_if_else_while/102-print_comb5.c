#include <stdio.h>

/**
 * main - Program prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;

	while (i < 99)
	{
		while (j <= 99)
		{
			if (i < j)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');

	return (0);
}
