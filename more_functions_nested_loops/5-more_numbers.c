#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: rows of numbers.
 */
void more_numbers(void)
{
	int row = 0;
	int col = 0;

	while (row < 10)
	{
		while (col < 15)
		{
			if (col >= 10)
			{
				_putchar(((col - (col % 10)) / 10) + 48);
			}
			_putchar((col % 10) + 48);
			col = (col + 1);
		}

		col = 0;
		row = row + 1;
		_putchar('\n');
	}
}
