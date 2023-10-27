#include "main.h"

/**
 * times_table - check the code
 *
 * Return: times tables.
 */
void times_table(void)
{
	int max_rows = 10;
	int max_cols = 10;
	int curr_row = 0;
	int curr_col = 0;
	int num = 0;
	int first_digit = 0;
	int second_digit = 0;

	while (curr_row < max_rows)
	{
		curr_col = 0;
		while (curr_col < max_cols)
		{
			num = curr_col * curr_row;
			if (num >= 10)
				_putchar(' ');
			else
			{
				if (curr_col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			first_digit = num % 10;
			if (num >= 10)
			{
				second_digit = (num - first_digit) / 10;
				_putchar(second_digit + 48);
			}
			_putchar(first_digit + 48);

			if (curr_col < 9)
				_putchar(',');

			curr_col = curr_col + 1;
		}
		_putchar('\n');
		curr_row = curr_row + 1;
	}
}
