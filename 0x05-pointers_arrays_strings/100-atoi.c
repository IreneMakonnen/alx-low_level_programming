#include "main.h"

/**
 * _atoi - Converts string to an integer
 * @s: Pointer to character
 * Return: Integer or 0 if there's no numbers in string
 */

int _atoi(char *s)
{
	int charas;
	int signs;
	int results;

	charas = 0;
	signs = 1;
	results = 0;

	while (s[charas] == ' ')
		charas++;

	if (s[charas] == '-')
	{
		signs = -1;
		charas++;
	}
	else if (s[charas] == '+')
		charas++;

	while (s[charas] >= '0' && s[charas] <= '9')
	{
		results = results * 10 + (s[charas] - '0');
		charas++;
	}

	return (signs * results);
}
