#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the code
 * @grid: pointer to the grid
 * @height: height of grid
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
