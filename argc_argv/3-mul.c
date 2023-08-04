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
	char *str1 = argv[1];
	char *str2 = argv[2];
	int num1 = 1;
	int num2 = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = *str1 - 48;
		num2 = *str2 - 48;
		str1 = str1 + 1;
		str2 = str2 + 1;

		/**
		* printf("num1 - %d, num2 - %d\n", num1, num2);
		*/

		while (*str1 != '\0')
		{
			num1 = (num1 * 10) + (*str2 - 48);
		}
		while (*str2 != '\0')
		{
			num2 = (num2 * 10) + (*str2 - 48);
		}

		printf("%d\n", (num1 * num2));
	}
	return (0);
}
