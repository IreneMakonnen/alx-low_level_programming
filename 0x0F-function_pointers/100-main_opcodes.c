#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of its own main function
 * @argc: Counts number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", func_ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
