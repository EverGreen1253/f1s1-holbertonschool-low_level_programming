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
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
