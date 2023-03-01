#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Print a buffer
 * @b: Pointer to size
 * @size: Bytes of buffer
 */

void print_buffer(char *b, int size)
{
	int j;
	int k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (j = 0; j < size; j += 10)
	{
		printf("%08x ", j);

		for (k = j; k < j + 10; k++)
		{
			if (k < size)
			{
				printf("%02x ", (unsigned char)b[k]);
			}
			else
			{
				printf("  ");
			}
		}
		printf(" ");
		for (k = j; k < j + 10; k++)
			if (k < size)
			{
				if (b[k] >= 32 && b[k] <= 126)
				{
					printf("%c", b[k]);
				}
				else
				{
					printf(".");
				}
			}
				else
				{
					printf(" ");
				}
			}
	printf("\n");
}
