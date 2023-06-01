/**
 * get_op_func - function that selects the correct function to
 * to perform the operation
 * @s: pointer to char, operator past as argument to the program
 * Return: pointer to the corresponding function
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
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
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

