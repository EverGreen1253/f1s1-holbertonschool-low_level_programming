#include "main.h"

/**
 * print_line - check the code
 * @n: length of line
 *
 * Return: chars that make a line.
 */
void print_line(int n)
{
	int length = 0;

	if (n > 0)
	{
		while(length < n)
		{
			_putchar('_');
			length = length + 1;
		}
	}
	_putchar('\n');
}

