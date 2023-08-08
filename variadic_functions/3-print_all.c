#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: string containing all the format chars
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_list list;
	int i = 0;
	int j = 0;
	int printed_one = 0;

	va_start(list, format);
		while (format != NULL && format[i] != '\0')
		{
			while (j < 4)
			{
				if (*ops[j].t == format[i])
				{
					/**
					 * printf("match found - %c\n", format[i]);
					 */

					if (printed_one == 1)
						printf(", ");

					ops[j].f(&list);
					printed_one = 1;
				}
				j = j + 1;
			}
			j = 0;
			i = i + 1;
		}
	va_end(list);
	printf("\n");
}

/**
 * print_char - prints a char
 * @list: pointer to list
 *
 * Return : nothing
 */
void print_char(va_list *list)
{
	char c;

	c = va_arg(*list, int);

	printf("%c", c);
}

/**
 * print_int - prints an int
 * @list: pointer to list
 *
 * Return : nothing
 */
void print_int(va_list *list)
{
	int x;

	x = va_arg(*list, int);

	printf("%d", x);
}

/**
 * print_float - prints a float
 * @list: pointer to list
 *
 * Return : nothing
 */
void print_float(va_list *list)
{
	double f;

	f = va_arg(*list, double);

	printf("%f", f);
}

/**
 * print_string - does what it says
 * @list: pointer to list
 *
 * Return : nothing
 */
void print_string(va_list *list)
{
	char *s;

	s = va_arg(*list, char *);

	printf("%s", (s == NULL) ? "(nil)" : s);
}
