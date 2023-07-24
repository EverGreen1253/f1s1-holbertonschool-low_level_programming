#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char final_ch;

	ch = 'z';
	final_ch = 'a' - 1;

	while (ch != final_ch)
	{
		putchar(ch);
		ch = ch - 1;
	}

	putchar('\n');

	return (0);
}
