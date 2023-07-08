#include "main.h"
#include <stdio.h>

/**
 * main - Program prints all arguents it receives
 * @argc: Counts the number of arguments
 * @argv: Points to array of strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
