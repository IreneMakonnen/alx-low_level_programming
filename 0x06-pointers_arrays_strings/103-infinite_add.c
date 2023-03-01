#include "main.h"

/**
 * infinite_add - Add two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer where function will store result
 * @size_r: Buffer size
 * Return: 0 if can't be stored or Pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = sl(n1);
	int l2 = sl(n2);

	if (l1 > size_r || l2 > size_r)
		return (0);

	int c;
	int j;
	int k;
	int l;
	c = 0;

	for (j = l1 - 1, k = l2 -1, m = size_r - 1; j >=0 || j>=0 || c; j--, k--, l--)
	{
		int add = c;
		if (j >= 0)
			add += n1[j] - '0';
		if (j >= 0)
			add += n2[k] - '0';
		c = add / 10;
		r[l] =add % 10 + '0';
	}
	if (l < 0)
		return (0);
	return &r[l++];
}
