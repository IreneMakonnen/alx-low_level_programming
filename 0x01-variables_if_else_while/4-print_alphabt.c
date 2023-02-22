#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	while (ch != 'q' && ch != 'e')
		ch++;
	putchar(ch);
			putchar('\n');
	return (0);
}
