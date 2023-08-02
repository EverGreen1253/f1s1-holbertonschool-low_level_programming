#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n: number to validate if prime or not
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	int result = 0;

	int s[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 0};

	if (n > 1 && (n % 2 != 0))
	{
		result = is_prime_number_step(n, s);
	}

	return (result);
}

/**
 * is_prime_number_step - check the code
 * @n: number to validate
 * @s: array slot containing the prime number to check against
 *
 * Return: if number is prime or not
 */
int is_prime_number_step(int n, int *s)
{
	int result = 1;

	if (*s != 0)
	{
		if (n == *s)
		{
			result = 1;
		}
		else
		{
			if (n % *s == 0)
			{
				return (0);
			}
			else
			{
				result = is_prime_number_step(n, s + 1);
			}
		}
	}

	return (result);
}
