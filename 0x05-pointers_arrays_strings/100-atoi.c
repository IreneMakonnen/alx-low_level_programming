#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s:Pointer to string
 * Return: Product of sign and result
 */

int _atoi(char *s)
{
	int sgn, end, j;

	sgn = 1;
	end = 0;

	for (j = 0; s[j] != '\0'; ++j)
	{
		if (s[j] == '-')
			sgn = -1;
		else if (s[j] >= '0' && s[j] <= '9')
			end = end * 10 + (s[j] - '0');
		else if (end > 0)
			break;
	}
	return (sgn * end);
}
