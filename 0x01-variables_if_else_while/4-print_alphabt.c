#include <stdio.h>

/**
 * main - Prints lowercase alphabets except q & e
 * Return: 0
 */

int main(void)
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
			putchar(lowercase);
		lowercase++;
	}

	putchar('\n');
	return (0);
}
