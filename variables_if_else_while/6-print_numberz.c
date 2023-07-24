#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int final_digit;
	int digit;

	final_digit = 9;
	digit = 0;

	while (digit <= final_digit)
	{
		putchar(48 + digit);
		digit = digit + 1;
	}

	putchar('\n');

	return (0);
}
