#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: number to convert;
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int value = n;
	int p;

	if (n != 0)
	{
		while((value - (1 << i)) >= 0)
		{
			i = i + 1;
		}
		i = i - 1;

		/* printf("For %lu, the largest binary digit at pos %d\n", n, i); */
	}

	while (i >= 0)
	{
		p = twopower(i);

		if ((value - p) >= 0)
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
 * @base: base
 * @power: power
 *
 * Return: int result.
 */
int twopower(int power)
{
	int result = 1;
	int i = 0;

	while (i < power)
	{
		result = result * 2;
		i = i + 1;
	}

	/* printf("base - %d, power - %d, result - %d\n", base, power, result); */

	return (result);
}
