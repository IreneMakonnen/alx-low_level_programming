#include "3-calc.h"

/**
 * get_op_func - Selects correct funtion to perform operation asked by user
 * @s: Operator passed as argument to the program
 * Return: NULL if doesn't match expected opeartors
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i].op != 0)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (0);
}
