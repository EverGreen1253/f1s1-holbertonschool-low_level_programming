#include "main.h"
#include <stdio.h>

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

	if (argc > 0 && argv[0] != NULL)
	{
		while (i < argc)
		{
			printf("%s\n", (argv[i]));

			i = i + 1;
		}
	}
	return (0);
}
