#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary string
 *
 * Return: int value of passed in string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	int len;
	int digit;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		digit = b[i];
		if (digit < 48 || digit > 49)
		{
			return (0);
		}

		i = i + 1;
	}
	len = i - 1;
	i = 0;

	while (i <= len)
	{
		digit = b[len - i];
		result = result + _pow((digit - 48), i);
		i = i + 1;
	}

	return (result);
}

int _pow(int base, int power)
{
	int result = 0;
	int i = 0;

	if (base == 1)
	{
		result = 1;

		while (i < power)
		{
			result = result * 2;
			i = i + 1;
		}
	}

	/**
	 * printf("base - %d, power - %d, result - %d\n", base, power, result);
	 */

	return (result);
}
