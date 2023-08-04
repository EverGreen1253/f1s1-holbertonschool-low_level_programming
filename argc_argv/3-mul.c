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
	int num1 = *argv[1];
	int num2 = *argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("num1 - %d, num2 - %d\n", num1 - 48, num2 - 48);

		printf("%d\n", ((num1 - 48) * (num2 - 48)));
	}
	return (0);
}
