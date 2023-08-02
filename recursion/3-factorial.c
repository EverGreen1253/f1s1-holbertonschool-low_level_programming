#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n: the value passed in
 *
 * Return: factorial value.
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
	{
		result = -1;
	}
	if (n == 0)
	{
		result = 1;
	}
	if (n > 0)
	{
		result = (n * factorial(n - 1));
	}
	return (result);
}
