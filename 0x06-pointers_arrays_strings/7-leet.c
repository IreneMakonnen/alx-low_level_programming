#include "main.h"

/**
 * leet - Encode a string into 1337
 * @st: String to encode
 * Return: Pointer to encoded string
 */

char *leet(char *st)
{
	int j;
	int k;
	char *letter = "aAeEoOtTlL";
	char *leet = "4433007711";
	char *encode = st;

	for (j = 0; st[j]; j++)
	{
		for (k = 0; letter[k]; k++)
		{
			if (st[j] == letter[k])
			{
				encode[j] = leet[k];
				break;
			}
		}
	}

	return (encode);
}
