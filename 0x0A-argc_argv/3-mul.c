#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 1 if fail or 0 if success
 */

int main(int argc, char *argv[])
{
	int no1;
	int no2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);

	result = no1 * no2;
	printf("%d\n", result);
	return (0);
}
