#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Program adds positive numbers
 * @argc: Counts the number of arguments
 * @argv: Points to array of strings
 * Return: 0 (Success) or 1 for Error
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
