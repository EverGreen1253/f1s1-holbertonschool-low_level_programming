#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 * @a: the 2d array to print
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int y = 0;
	int rowsize = sizeof(a);
	int colsize;

	while (i < rowsize)
	{
		colsize = sizeof(a[i]);
		while (y < colsize)
		{
			_putchar(a[i][y]);
			y = y + 1;
		}

		i = i + 1;
		y = 0;
		_putchar('\n');
	}
}
