#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: no. of params
 * @argv: array of params
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	int term = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	while (i < argc)
	{
		if (i > 0)
		{
			term = atoi(argv[i]);
			if (term == 0)
			{
				printf("Error\n");
				return (1);
			}
			
			sum = sum + term;
		}

		i = i + 1;
	}
	printf("%d\n", sum);

	return (0);
}
