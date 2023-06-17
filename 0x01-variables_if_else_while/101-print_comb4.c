#include <stdio.h>

/**
 * main - Program prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');

	return (0);
}
