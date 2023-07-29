#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: most digits followed by newline.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if ((num != 2) && (num != 4))
		{
			_putchar(num + 48);
		}

		num = num + 1;
	}

	_putchar('\n');
}
