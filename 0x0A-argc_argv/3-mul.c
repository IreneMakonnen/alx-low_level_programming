#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies two numbers
 * @argc: Counts the number of arguments
 * @argv: Points to array of strings
 * Return: 0 (Success) or 1 for Error
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	{
		printf("%d\n", mult);
	}

	return (0);
}
