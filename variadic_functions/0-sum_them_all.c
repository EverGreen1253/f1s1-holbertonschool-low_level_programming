#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: first arg passed in
 *
 * Return: 0 or sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int term;
	int total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

		while (i < n)
		{
			term = va_arg(list, int);
			total = total + term;

			i = i + 1;
		}

	va_end(list);

	return (total);
}
