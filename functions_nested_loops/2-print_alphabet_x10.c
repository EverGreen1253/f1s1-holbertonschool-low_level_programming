#include "main.h"

/**
 * print_alphabet_x10 - calls _putchar x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;

	count = 10;
	while (count > 0)
	{
		char ch;
		char final_ch;

		ch = 'a';
		final_ch = 'z' + 1;

		while (ch != final_ch)
		{
			_putchar(ch);
			ch = ch + 1;
		}

		_putchar('\n');


		count = count - 1;
	}
}
