#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: Initial segment
 * @accept: Source of bytes
 * Return: Number of matching characters or length of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_s = 0;
	unsigned int len_accept = 0;

	while (s[len_s] != '\0')
	{
		len_s++;
	}
	while (accept[len_accept] != '\0')
	{
		len_accept++;
	}

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (j == len_accept)
		{
			return (i);
		}
	}
	return (len_s);
}
