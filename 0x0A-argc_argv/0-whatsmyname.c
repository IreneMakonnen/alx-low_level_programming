#include "main.h"
#include <stdio.h>

/**
 * main - Program prints its name followed by new line
 * @argc: Counts the number of arguments
 * @argv: Points to array of strings
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
