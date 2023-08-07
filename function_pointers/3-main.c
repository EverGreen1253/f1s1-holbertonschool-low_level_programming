#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int (*operation)(int, int);

	/**
	 * printf("No. of arguments - %d\n", argc);
	 * printf("First argument - %s\n", argv[0]);
	 */

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);
	result = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
