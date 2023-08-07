#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - call the function performing the operation
 * @s: the operator passed in
 *
 * Return: pointer to function.
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

	while (*ops[i].op != *s)
	{
		/**
		 * printf("To compare - %s\n", ops[i].op);
		 * printf("Math operator - %s\n", s);
		 */

		i = i + 1;

		if ((i > 4) || (s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}

	}

	return (ops[i].f);
}
