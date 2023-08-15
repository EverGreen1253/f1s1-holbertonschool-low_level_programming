#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - check the code
 * @n: pointer to the number
 * @index: the bit position
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int result = -1;
	unsigned long int value = *n;
	int r;
	signed long int i = 0;

	if (index > 65)
		return (-1);

	while (value > 0)
	{
		r = (value % 2);
		if (r == 1)
			value = value - 1;

		if (i == index)
		{
			/* only bother if bit is 1 */
			if (r == 1)
			{
				*n = *n - twopower(i);
			}

			return (1);
		}

		i = i + 1;
		value = value / 2;
	}

	/* the bit to set is faaaaaaar ahead or value is 0 */
	if ((index > (i - 1)) || (value == 0))
	{
		/* no change */
		return (1);
	}

	return (result);
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
