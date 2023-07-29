#include "main.h"

/**
 * print_triangle - check the code
 * @size: triangle size
 *
 * Return: a triangle.
 */
void print_triangle(int size)
{
	int vert = 0;
	int spaces;
	int hexes;
	int spacepos = 0;
	int hexpos = 0;

	if (size > 0)
	{
		while (vert < size)
		{
			spaces = size - (vert + 1);
			hexes = size - spaces;

			while (spacepos < spaces)
			{
				_putchar(' ');
				spacepos = spacepos + 1;
			}
			while (hexpos < hexes)
			{
				_putchar('#');
				hexpos = hexpos + 1;
			}

			vert = vert + 1;
			spacepos = 0;
			hexpos = 0;

			if (vert < size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
