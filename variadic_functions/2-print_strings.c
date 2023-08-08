#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: delimiter
 * @n: num of args
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *term;
	unsigned int i = 0;

	va_start(list, n);
		while (i < n)
		{
			term = va_arg(list, char *);
			printf("%s", term);

			if (i != n - 1)
			{
				printf("%s", separator);
			}
			i = i + 1;
		}
	va_end(list);

	printf("\n");
}
