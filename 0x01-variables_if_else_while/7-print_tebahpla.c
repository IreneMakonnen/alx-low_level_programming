#include <stdio.h>

/**
 * main - Program prints lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
