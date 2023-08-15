#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary - check the code
 * @n: number to convert;
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	signed long int i = 0;
	unsigned long int value = n;
	unsigned long int p;

	if (n != 0)
	{
		if (n == ULONG_MAX)
		{
			while (i < 64)
			{
				_putchar('1');
				i = i + 1;
			}
			i = -1;
		}
		else
		{
			while (value >= twopower(i))
			{
				/* printf("i - %ld, n - %lu, twopower - %lu\n", i, n, twopower(i)); */
				i = i + 1;
			}
			i = i - 1;
		}

		/* printf("For %lu, the largest binary digit at pos %lu\n", n, i); */
	}

	while (i >= 0)
	{
		p = twopower(i);

		if (value >= p)
		{
			_putchar('1');
			value = value - p;
		}
		else
		{
			_putchar('0');
		}

		i = i - 1;
	}
}

/**
 * twopower - my own implementation of the pow function
 * @power: power
 *
 * Return: int result.
 */
unsigned long int twopower(signed long int power)
{
	unsigned long int result = 1;
	signed long int i = 0;

	while (i < power)
	{
		result = result * 2;
		i = i + 1;
	}

	/* printf("base - 2, power - %ld, result - %lu\n", power, result); */

	return (result);
}
