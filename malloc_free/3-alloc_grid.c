#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int y = 0;
	int x = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height);
	while (y < height)
	{
		grid[y] = malloc(width);

		while (x < width)
		{
			grid[y][x] = 0;
			x = x + 1;
		}
		y = y + 1;
		x = 0;
	}

	return (grid);
}
