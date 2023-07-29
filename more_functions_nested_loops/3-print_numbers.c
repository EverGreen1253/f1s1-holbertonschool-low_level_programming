#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: all digits followed by newline.
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + 48);
		num = num + 1;
	}

	_putchar('\n');
}
