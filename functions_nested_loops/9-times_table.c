#include "main.h"

/**
 * times_table - check the code
 *
 * Return: times tables.
 */
void times_table(void)
{
	int row = 0;
	int col = 0;
	int result;
	int digit_f;
	int digit_s;

	while (row < 10)
	{
		while (col < 10)
		{
			result = row * col;
			digit_s = result % 10;
			digit_f = (result - digit_s) / 10;

			if (result < 10)
			{
				if (result == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(digit_s + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(digit_f + 48);
				_putchar(digit_s + 48);
			}

			if (col != 9)
			{
				_putchar(',');
			}

			col = col + 1;
		}

		_putchar('\n');

		col = 0;
		row = row + 1;
	}
}
