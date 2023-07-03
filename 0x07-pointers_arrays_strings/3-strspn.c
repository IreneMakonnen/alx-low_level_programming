#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters to be included
 * Return: Number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	int find;
	int a;

	length = 0;

	while (*s)
	{
		find = 0;

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				find = 1;
				break;
			}
		}
		if (!find)
			break;

		length++;
		s++;
	}

	return (length);
}
