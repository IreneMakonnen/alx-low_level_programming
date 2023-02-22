#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all single digit numbers of base 10
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(48 + n);
			putchar('\n');
	return (0);
}
