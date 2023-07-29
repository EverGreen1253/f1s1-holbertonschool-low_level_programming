#include "main.h"

/**
 * print_diagonal - check the code
 * @n: length of the slashes
 *
 * Return: diagonal line.
 */
void print_diagonal(int n)
{
	int vert = 0;
	int horz = 0;

	if (n > 0)
	{
		while (vert < n)
		{
			while (horz < vert)
			{
				_putchar(' ');

				horz = horz + 1;
			}
			_putchar('\\');
			_putchar('\n');

			vert = vert + 1;
			horz = 0;
		}
	}
}
