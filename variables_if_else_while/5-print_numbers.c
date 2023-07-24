#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit = digit + 1;
	}

	printf("\n");

	return (0);
}
