#include "main.h"

/**
 * rot13 - Encode a string using rot13
 * @st: String to be encoded
 * Return: Pointerto encoded string
 */

char *rot13(char *st)
{
	int j;
	int k;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; st[j] != '\0'; j++)
	{
		for (k = 0; alpha[k] != '\0'; k++)
		{
			if (st[j] == alpha[k])
			{
				st[j] = rot13[k];
				break;
			}
		}
	}

	return (st);
}
