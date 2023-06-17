#include <stdio.h>

/**
 * main - Program prints base 16 numbers in lowercase
 * Return: 0
 */

int main(void)
{
	int i;
	char alpha;

	i = 0;
	alpha = 'a';
	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
