#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: delimiter character
 * @n: num of params passed in
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int term;

	if (n != 0)
	{
		va_start(list, n);
			while (i < n)
			{
				term = va_arg(list, int);
				printf("%d", term);

				if (i != n - 1 && separator != NULL)
				{
					printf("%s", separator);
				}

				i = i + 1;
			}
		va_end(list);
	}
	printf("\n");
}
