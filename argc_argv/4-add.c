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
	int digitsonly = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	while (i < argc)
	{
		if (i > 0)
		{
			digitsonly = check_digits_only(argv[i]);
			term = atoi(argv[i]);
			if (term == 0 || digitsonly == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + term;
		}

		i = i + 1;
	}
	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}

/**
 * check_digits_only - look at the code
 * @s: pointer to string start
 *
 * Return: 1 or 0
 */
int check_digits_only(char *s)
{
	int i = 0;
	int c;

	while (s[i] != '\0')
	{
		c = s[i] - 48;
		if (!(c >= 0 && c <= 9))
		{
			return (0);
		}

		i = i + 1;
	}

	return (1);
}
