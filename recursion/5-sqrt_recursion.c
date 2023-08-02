#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n: the number to perform square root on
 *
 * Return: squareroot result.
 */
int _sqrt_recursion(int n)
{

	int result = -1;

	if (n > 0)
	{
		result = _sqrt_step(n, 1);
	}

	return (result);
}

/**
 * _sqrt_step - check the code
 * @n: number after subtraction
 * @s: the amoount to subtract
 *
 * Return: subtraction result
 */
int _sqrt_step(int n, int s)
{
	int step = 0;
	int result  = 0;

	if ((n - s) > 0)
	{
		result = _sqrt_step(n - s, s + 2);

		if (result != -1)
		{
			step = result + 1;
		}
		else
		{
			step = -1;
		}
	}

	if ((n - s) == 0)
	{
		step = 1;
	}

	if ((n - s) < 0)
	{
		step = -1;
	}

	return (step);
}
