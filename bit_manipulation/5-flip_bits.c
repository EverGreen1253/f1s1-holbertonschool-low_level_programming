#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: first num
 * @m: second num
 *
 * Return: no of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m, old;
	unsigned int changed = 0;

	while (flipped > 0)
	{
		old = flipped;
		flipped = flipped >> 1;

		if (((flipped * 2) + 1) == old)
		{
			changed = changed + 1;
		}
	}

	return (changed);
}
