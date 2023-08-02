#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @x: the number
 * @y: number of times to multiply
 *
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
	{
		result = -1;
	}

	if (y == 0)
	{
		result = 1;
	}

	if (y > 0)
	{
		result = x * _pow_recursion(x, (y - 1));
	}

	return (result);
}
