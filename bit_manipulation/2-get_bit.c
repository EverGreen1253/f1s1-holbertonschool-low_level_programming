#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: the number
 * @index: the bit position
 *
 * Return: bit value or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = -1;
	unsigned long int value = n;
	int r;
	unsigned int i = 0;

	while (value > 0)
	{
		r = (value % 2);
		if (r == 1)
		{
			value = value - 1;
			/* printf("i - %d, bit - 1\n", i); */
		}
		else
		{
			/* printf("i - %d, bit - 0\n", i); */
		}

		if (i == index)
		{
			return (r);
		}

		i = i + 1;
		value = value / 2;
	}

	/* pad the number with extra zeroes in front */
	if (index > (i - 1))
	{
		return (0);
	}

	return (result);
}
