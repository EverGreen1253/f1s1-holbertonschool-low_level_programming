#include "main.h"

/**
 * print_square - check the code
 * @size: length of square side
 *
 * Return: Square shape.
 */
void print_square(int size)
{
	int vert = 0;
	int horz = 0;

	if (size > 0)
	{
		while (vert < size)
		{
			while (horz < size)
			{
				_putchar('#');
				horz = horz + 1;
			}
			horz = 0;
			vert = vert + 1;

			if (vert < size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
