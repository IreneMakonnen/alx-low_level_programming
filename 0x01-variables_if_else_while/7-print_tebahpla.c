#include <stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase alpha in reverse
 * Return: Always 0 (Success)
*/

int main(void)
{
	int ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
		putchar('\n');
	return (0);
}
